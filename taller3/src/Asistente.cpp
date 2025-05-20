#include "../include/Asistente.hpp"
#include "../include/Registro.hpp"

Asistente::Asistente(std::string nombre, std::string identificacion,
                     std::string idEmpleado)
    : Persona(nombre, identificacion), idEmpleado(idEmpleado) {}

void Asistente::registrarPrestamo(Material *material, Persona *persona) {
  if (persona->puedePrestar() && material->getDisponible()) {
    material->registrarPrestamo();
    persona->incrementarPrestamos();
    Registro r;
    r.guardarOperacion("prestamos.txt", "Prestamo", material, persona, this);
  }
}
void Asistente::registrarDevolucion(Material *material, Persona *persona) {
  material->registrarDevolucion();
  persona->decrementarPrestamos();
  Registro r;
  r.guardarOperacion("devoluciones.txt", "Devolucion", material, persona, this);
}
void Asistente::setIdEmpleado(std::string idEmpleado) {
  this->idEmpleado = idEmpleado;
}
std::string Asistente::getIdEmpleado() { return idEmpleado; }
