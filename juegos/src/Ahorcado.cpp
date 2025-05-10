#include "../include/Ahorcado.hpp"
#include <string>
#include <utility>

Ahorcado::Ahorcado(std::string jugador, const bool esCPU,
                   std::string jugadorGenerador)
    : Juego(std::move(jugador)), esCPU(esCPU), jugadorGenerador(std::move(jugadorGenerador)) {}

void Ahorcado::iniciar() {}

void Ahorcado::setPalabrasDesdeArchivo(const std::string& rutaArchivo) {}

void Ahorcado::generarPalabraAleatoria() {}

bool Ahorcado::adivinarLetra(char letra) { return false; }
