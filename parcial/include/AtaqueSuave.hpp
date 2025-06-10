#pragma once
#include "Arma.hpp"

class AtaqueSuave : public Arma{
    private:
        double precision;
        int temperatura;
    public:
    AtaqueSuave(double potencia, double precision, double daño) ;

    double calcularDaño() override;
};