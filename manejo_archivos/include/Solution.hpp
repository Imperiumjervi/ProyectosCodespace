#pragma once
#include <iostream>

class Estudiante {
  private:
  std::string codigo;
  std::string nombre;
  float notas[3];
  float adicional;
  float promedio;

public:
  Estudiante();
  Estudiante(std::string codigo, std::string nombre, float notas[3], float adicional);

  void setCodigo(std::string codigo);
  std::string getCodigo();

  void setNombre(std::string nombre);
  std::string getNombre();

  void setAdicional(float adicional);
  float getAdicional();

  void setNotas(float notas[3]);


  float calcularPromedio();

};
