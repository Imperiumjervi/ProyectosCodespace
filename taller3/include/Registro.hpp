#pragma once

#include <string>
class Registro {
public:
  std::string archivoPrestamos;
  std::string archivoDevoluciones;

  Registro(std::string archivoPrestamos, std::string archivoDevoluciones);
  void guardarOperacion(std::string archivo, std::string operacion,
                        Material *material, Persona *persona,
                        Asistente *asistente);
};
