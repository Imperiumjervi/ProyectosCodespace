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

void Persona::setNombre(std::string nombre) { this->nombre = nombre; }
void Persona::setIdentificacion(std::string identificacion) {
  this->identificacion = identificacion;
}
void Persona::setPrestamosActivos(int prestamosActivos) {
  this->prestamosActivos = prestamosActivos;
}
std::string Persona::getNombre() { return nombre; }
std::string Persona::getIdentificacion() { return identificacion; }
int Persona::getPrestamosActivos() { return prestamosActivos; }
