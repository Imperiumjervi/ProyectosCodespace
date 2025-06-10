#pragma once
#include <iostream>

class Arma {
public:
  double potencia;
  double daño;
  

  virtual double calcularDaño() = 0;


};
