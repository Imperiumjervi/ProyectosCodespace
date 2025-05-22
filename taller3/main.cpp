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
  std::vector<Material *> materiales;

  std::vector<Material *> libros =
      CargadorMateriales::cargarLibros("libros.txt");
  std::vector<Material *> dvds = CargadorMateriales::cargarDVDs("DVDs.txt");
  std::vector<Material *> revistas =
      CargadorMateriales::cargarRevistas("Revistas.txt");

  for (int i = 0; i < libros.size(); i++) {
    materiales.push_back(libros[i]);
  }
  for (int i = 0; i < dvds.size(); i++) {
    materiales.push_back(dvds[i]);
  }
  for (int i = 0; i < revistas.size(); i++) {
    materiales.push_back(revistas[i]);
  }

  Persona *usuario = new Persona("Juan Perez", "123456");
  Asistente *asistente = new Asistente("Maria Lopez", "999999", "EMP001");

  int opcion = 0;

  while (opcion != 4) {
    std::cout << "\n===== MENU =====\n";
    std::cout << "1. Ver materiales\n";
    std::cout << "2. Registrar prestamo\n";
    std::cout << "3. Registrar devolucion\n";
    std::cout << "4. Salir\n";
    std::cout << "Seleccione una opcion: ";
    std::cin >> opcion;

    if (opcion == 1) {
      for (int i = 0; i < materiales.size(); i++) {
        std::cout << "[" << i << "] ";
        materiales[i]->mostrarInformacion();
        std::cout << "-----------------------\n";
      }
    } else if (opcion == 2) {
      int indice;
      std::cout << "Ingrese el indice del material a prestar: ";
      std::cin >> indice;

      if (indice >= 0 && indice < materiales.size()) {
        if (!materiales[indice]->getDisponible()) {
          std::cout << "El material no esta disponible.\n";
        } else if (!usuario->puedePrestar()) {
          std::cout << "El usuario ya tiene 3 prestamos activos.\n";
        } else {
          asistente->registrarPrestamo(materiales[indice], usuario);
          std::cout << "Prestamo registrado.\n";
        }
      } else {
        std::cout << "Indice invalido.\n";
      }

    } else if (opcion == 3) {
      int indice;
      std::cout << "Ingrese el indice del material a devolver: ";
      std::cin >> indice;

      if (indice >= 0 && indice < materiales.size()) {
        if (materiales[indice]->getDisponible()) {
          std::cout << "Ese material ya esta disponible.\n";
        } else {
          asistente->registrarDevolucion(materiales[indice], usuario);
          std::cout << "Devolucion registrada.\n";
        }
      } else {
        std::cout << "Indice invalido.\n";
      }

    } else if (opcion == 4) {
      std::cout << "Saliendo del sistema...\n";
    } else {
      std::cout << "Opcion no valida.\n";
    }
  }

  for (int i = 0; i < materiales.size(); i++) {
    delete materiales[i];
  }
  delete usuario;
  delete asistente;

  return 0;
}
