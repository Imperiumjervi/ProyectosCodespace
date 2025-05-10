#include "../include/Juego.hpp"
#include <string>
#include <utility>

Juego::Juego(std::string jugador) : jugador(std::move(jugador)) {}

void Juego::guardarResultado(const std::string& resultado) {}

std::string Juego::obtenerFechaActual() { return "Fecha actual"; }
