#include "Parejas.hpp"
#include <string>
#include <utility>

Parejas::Parejas() : Juego(""), filas(0), columnas(0), parejasEncontradas(0) {}

Parejas::Parejas(std::string jugador, int filas, int columnas)
    : Juego(std::move(jugador)), filas(filas), columnas(columnas) {}

void Parejas::iniciar() {}

void Parejas::cargarSimbolosDesdeArchivo(const std::string& rutaArchivo) {}

void Parejas::mezclarTablero() {}

bool Parejas::descubrirCasilla(int x1, int y1, int y2) {}
