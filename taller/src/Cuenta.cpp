#include "../include/Cuenta.hpp"
#include <iostream>
#include <ostream>

Cuenta::Cuenta() {}

Cuenta::Cuenta(double saldo) : saldo(saldo) {}

double Cuenta::getSaldo() { return saldo; }

void Cuenta::setSaldo(double saldo) { this->saldo = saldo; }

void Cuenta::consignar(double cantidad) {
  saldo += cantidad;
  std::cout << "Se han consignado: " << cantidad << "$ \n";
}

void Cuenta::retirar(double cantidad) {
  if (cantidad > saldo) {
    std::cout << "No hay suficiente saldo" << std::endl;
  } else {
    saldo -= cantidad;
    std::cout << "Se han retirado: " << cantidad << "$ \n";
  }
}
