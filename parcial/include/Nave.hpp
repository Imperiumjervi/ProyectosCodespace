#pragma once
#include "AtaqueFuerte.hpp"
#include "AtaqueSuave.hpp"


class Nave{
    private:
    double puntosSalud;
    double puntosDefensa;


        AtaqueFuerte ataquePotente;
        AtaqueSuave ataqueNormal;
    public:
        Nave();
    
        void mostrarInformacion();
        void calcularRangoAtaque();
};