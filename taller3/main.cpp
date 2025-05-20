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

  auto libros = CargadorMateriales::cargarLibros("libros.txt");
  auto dvds = CargadorMateriales::cargarDVDs("DVDs.txt");
  auto revistas = CargadorMateriales::cargarRevistas("Revistas.txt");

  materiales.insert(materiales.end(), libros.begin(), libros.end());
  materiales.insert(materiales.end(), dvds.begin(), dvds.end());
  materiales.insert(materiales.end(), revistas.begin(), revistas.end());

  Persona *usuario = new Persona("Juan Pérez", "123456");
  Asistente *asistente = new Asistente("María López", "999999", "EMP001");

  std::cout << "Cargando materiales:\n";
  for (Material *m : materiales) {
    m->mostrarInformacion();
    std::cout << "-----------------------\n";
  }

  std::cout << "Realizando prestamo y devolucion...\n";
  for (Material *m : materiales) {
    if (m->getDisponible()) {
      asistente->registrarPrestamo(m, usuario);
      asistente->registrarDevolucion(m, usuario);
      break;
    }
  }

  for (Material *m : materiales) {
    delete m;
  }
  delete usuario;
  delete asistente;

  return 0;
}
