#include "include/Cuenta.hpp"
#include "include/Usuario.hpp"
#include <iostream>

int main() {
  Cuenta cunenta(1000, "123456789");
  std::cout << "Saldo: " << cunenta.getSaldo() << std::endl;
  return 0;
}
