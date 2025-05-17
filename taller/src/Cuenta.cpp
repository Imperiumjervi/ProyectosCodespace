#include "../include/Cuenta.hpp"

Cuenta::Cuenta() {}

Cuenta::Cuenta(double saldo, std::string numero)
    : saldo(saldo), numero(numero) {}

double Cuenta::getSaldo() { return saldo; }

void Cuenta::setSaldo(double saldo) { this->saldo = saldo; }

std::string Cuenta::getNumero() { return numero; }

void Cuenta::setNumero(std::string numero) { this->numero = numero; }
