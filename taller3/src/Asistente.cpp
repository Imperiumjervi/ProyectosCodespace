#include "../include/Asistente.hpp"

Asistente::Asistente(std::string nombre, std::string identificacion,
                     std::string idEmpleado)
    : Persona(nombre, identificacion), idEmpleado(idEmpleado) {}

void Asistente::registrarPrestamo(Material *material, Persona *persona) {}
void Asistente::registrarDevolucion(Material *material, Persona *persona) {}
void Asistente::setIdEmpleado(std::string idEmpleado) {
  this->idEmpleado = idEmpleado;
}
