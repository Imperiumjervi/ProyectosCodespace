#pragma once

#include <string>
class Persona {
public:
  std::string nombre;
  std::string identificacion;
  int prestamosActivos;

  Persona(std::string nombre, std::string identificacion);
  bool puedePrestar();
  void incrementarPrestamos();
  void decrementarPrestamos();

  void setNombre(std::string nombre);
  void setIdentificacion(std::string identificacion);
  void setPrestamosActivos(int prestamosActivos);
  std::string getNombre();
  std::string getIdentificacion();
  int getPrestamosActivos();
};
