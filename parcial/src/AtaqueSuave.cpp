#include "AtaqueSuave.hpp"
#include <iostream>

AtaqueSuave::AtaqueSuave(double potencia, double precision, double daño) {
    potencia = potencia;
    precision = 0,7;
    daño = daño;
}

double AtaqueSuave::calcularDaño(){
 double dañoTotal = (potencia*precision) - (temperatura * 0,25);
 return dañoTotal;
}
