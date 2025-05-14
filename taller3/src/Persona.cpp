#include "../include/Persona.hpp"

Persona::Persona(std::string nombre, std::string identificacion)
    : nombre(nombre), identificacion(identificacion), prestamosActivos(0) {}

bool Persona::puedePrestar() { return prestamosActivos < 3; }
void Persona::incrementarPrestamos() { prestamosActivos++; }
void Persona::decrementarPrestamos() {
  if (prestamosActivos > 0) {
    prestamosActivos--;
  }
}
