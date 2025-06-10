#pragma once
#include "Arma.hpp"

class AtaqueFuerte : public Arma{
    private:
    double energia;
    
    
    public:
    AtaqueFuerte();
    AtaqueFuerte(double potencia, double energia, double daño);
    double calcularDaño() override;


};
