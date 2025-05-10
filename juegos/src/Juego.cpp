#include "../include/Juego.hpp"
#include <string>

Juego::Juego(std::string jugador) : jugador(jugador) {}

void Juego::guardarResultado(std::string resultado) {}

std::string Juego::obtenerFechaActual() { return "Fecha actual"; }
