#pragma once
#include <iostream>

class Cuenta {
private:
  double saldo;

public:
  Cuenta();
  Cuenta(double saldo);

  double getSaldo();
  void setSaldo(double saldo);

  void consignar(double cantidad);
  void retirar(double cantidad);
};
