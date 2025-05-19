#pragma once
#include "Material.hpp"
#include "Persona.hpp"
#include <string>
class Asistente : public Persona {
public:
  std::string idEmpleado;

  Asistente(std::string nombre, std::string identificacion,
            std::string idEmpleado);
  void registrarPrestamo(Material *material, Persona *persona);
  void registrarDevolucion(Material *material, Persona *persona);
  void setIdEmpleado(std::string idEmpleado);
};
