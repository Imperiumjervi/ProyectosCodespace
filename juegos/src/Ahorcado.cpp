#include "../include/Ahorcado.hpp"
#include <string>

Ahorcado::Ahorcado(std::string jugador, bool esCPU,
                   std::string jugadorGenerador)
    : Juego(jugador), esCPU(esCPU), jugadorGenerador(jugadorGenerador) {}

void Ahorcado::iniciar() {}

void Ahorcado::setPalabrasDesdeArchivo(std::string rutaArchivo) {}

void Ahorcado::generarPalabraAleatoria() {}

bool Ahorcado::adivinarLetra(char letra) { return false; }
