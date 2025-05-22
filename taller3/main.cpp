#include "include/Asistente.hpp"
#include "include/CargarMaterial.hpp"
#include "include/Dvd.hpp"
#include "include/Libro.hpp"
#include "include/Material.hpp"
#include "include/Persona.hpp"
#include "include/Revista.hpp"
#include <iostream>
#include <vector>

int main() {
  std::vector<Material *> libros =
      CargadorMateriales::cargarLibros("libros.txt");
  std::vector<Material *> dvds = CargadorMateriales::cargarDVDs("DVDs.txt");
  std::vector<Material *> revistas =
      CargadorMateriales::cargarRevistas("Revistas.txt");

  std::vector<Material *> todosLosMateriales;
  for (int i = 0; i < libros.size(); i++)
    todosLosMateriales.push_back(libros[i]);
  for (int i = 0; i < dvds.size(); i++)
    todosLosMateriales.push_back(dvds[i]);
  for (int i = 0; i < revistas.size(); i++)
    todosLosMateriales.push_back(revistas[i]);

  Persona *usuario = 0;
  Asistente *asistente = 0;

  int tipoUsuario = 0;
  std::cout << "Ingrese como:\n";
  std::cout << "1. Persona normal\n";
  std::cout << "2. Asistente de biblioteca\n";
  std::cout << "Opcion: ";
  std::cin >> tipoUsuario;

  if (tipoUsuario == 1) {
    usuario = new Persona("Juan Perez", "123456");
  } else if (tipoUsuario == 2) {
    asistente = new Asistente("Maria Lopez", "999999", "EMP001");
    usuario = asistente;
  } else {
    std::cout << "Opcion invalida.\n";
    return 1;
  }

  int opcion = 0;
  while (opcion != 5) {
    std::cout << "\n===== MENU =====\n";
    std::cout << "1. Ver Libros\n";
    std::cout << "2. Ver DVDs\n";
    std::cout << "3. Ver Revistas\n";
    std::cout << "4. Prestar o devolver material\n";
    std::cout << "5. Salir\n";
    std::cout << "Seleccione una opcion: ";
    std::cin >> opcion;

    if (opcion == 1) {
      for (int i = 0; i < libros.size(); i++) {
        std::cout << "[" << i << "] ";
        libros[i]->mostrarInformacion();
        std::cout << "-----------------------\n";
      }
    } else if (opcion == 2) {
      for (int i = 0; i < dvds.size(); i++) {
        std::cout << "[" << i << "] ";
        dvds[i]->mostrarInformacion();
        std::cout << "-----------------------\n";
      }
    } else if (opcion == 3) {
      for (int i = 0; i < revistas.size(); i++) {
        std::cout << "[" << i << "] ";
        revistas[i]->mostrarInformacion();
        std::cout << "-----------------------\n";
      }
    } else if (opcion == 4) {
      if (asistente == 0) {
        std::cout
            << "Solo el asistente puede registrar prestamos o devoluciones.\n";
      } else {
        int subopcion = 0;
        std::cout << "1. Registrar prestamo\n";
        std::cout << "2. Registrar devolucion\n";
        std::cout << "Opcion: ";
        std::cin >> subopcion;

        for (int i = 0; i < todosLosMateriales.size(); i++) {
          std::cout << "[" << i << "] ";
          todosLosMateriales[i]->mostrarInformacion();
          std::cout << "-----------------------\n";
        }

        int indice;
        std::cout << "Ingrese el indice del material: ";
        std::cin >> indice;

        if (indice >= 0 && indice < todosLosMateriales.size()) {
          Material *m = todosLosMateriales[indice];
          if (subopcion == 1) {
            if (m->getDisponible()) {
              if (usuario->puedePrestar()) {
                asistente->registrarPrestamo(m, usuario);
                std::cout << "Prestamo registrado.\n";
              } else {
                std::cout << "El usuario ya tiene 3 prestamos.\n";
              }
            } else {
              std::cout << "El material no esta disponible.\n";
            }
          } else if (subopcion == 2) {
            if (!m->getDisponible()) {
              asistente->registrarDevolucion(m, usuario);
              std::cout << "Devolucion registrada.\n";
            } else {
              std::cout << "El material ya esta disponible.\n";
            }
          } else {
            std::cout << "Opcion invalida.\n";
          }
        } else {
          std::cout << "Indice invalido.\n";
        }
      }
    } else if (opcion == 5) {
      std::cout << "Saliendo del sistema...\n";
    } else {
      std::cout << "Opcion no valida.\n";
    }
  }

  for (int i = 0; i < todosLosMateriales.size(); i++) {
    delete todosLosMateriales[i];
  }
  delete usuario;

  return 0;
}
