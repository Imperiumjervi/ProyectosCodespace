#include "include/Cuenta.hpp"
#include "include/Usuario.hpp"
#include <iostream>
#include <ostream>

int main() {

  Cuenta *cuenta = new Cuenta(10000.00);

  Usuario usuario1("Juan", 222);
  usuario1.cuenta = cuenta;

  Usuario usuario2("Carla", 111);
  usuario2.cuenta = cuenta;

  std::cout << "Saldo inicial: " << cuenta->getSaldo() << std::endl;
  usuario1.cuenta->consignar(200);
  usuario2.cuenta->retirar(400);

  std::cout << "Saldo final: " << cuenta->getSaldo() << std::endl;

  delete cuenta;

  return 0;
}
