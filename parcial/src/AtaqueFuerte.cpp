#include "AtaqueFuerte.hpp"

AtaqueFuerte::AtaqueFuerte(){}

AtaqueFuerte::AtaqueFuerte(double potencia, double energia, double daño){
    potencia = potencia;
    energia = energia;
    daño = daño;
}

double AtaqueFuerte::calcularDaño(){
    energia = -30;
   double dañoTotal = (potencia * 5) - (energia / 100 * 0.25);
   return dañoTotal;
}
