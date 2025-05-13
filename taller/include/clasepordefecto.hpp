#pragma once
#include <iostream>

class Cuenta {
private:
  double saldo;
  std::string numero;
public:
  Cuenta();
  Cuenta(double saldo, std::string numero);   
};
