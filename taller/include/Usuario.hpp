#pragma once
#include "Cuenta.hpp"
#include <iostream>
#include <string>

class Usuario {
private:
  std::string nombre;
  int numero;

public:
  Usuario();
  Usuario(std::string nombre, int numero);
  std::string getNombre();
  void setNombre(std::string nombre);
  int getNumero();
  void setNumero(int numero);

  Cuenta *cuenta;
};
