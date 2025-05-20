#pragma once
#include "Asistente.hpp"
#include "Material.hpp"

#include <string>
class Registro {
public:
  std::string archivoPrestamos;
  std::string archivoDevoluciones;

  Registro();
  void guardarOperacion(std::string archivo, std::string operacion,
                        Material *material, Persona *persona,
                        Asistente *asistente);
};
