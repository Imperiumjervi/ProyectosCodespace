#pragma once
#include <iostream>

class Cuenta {
private:
  double saldo;
  std::string numero;

public:
  Cuenta();
  Cuenta(double saldo, std::string numero);
  double getSaldo();
  void setSaldo(double saldo);

  std::string getNumero();
  void setNumero(std::string numero);
};
