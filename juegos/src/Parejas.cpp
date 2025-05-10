#include "../include/Parejas.hpp"
#include <string>

Parejas::Parejas() : Juego(""), filas(0), columnas(0) {}

Parejas::Parejas(std::string jugador, int filas, int columnas)
    : Juego(jugador), filas(filas), columnas(columnas) {}

void Parejas::iniciar() {}

void Parejas::cargarSimbolosDesdeArchivo(std::string rutaArchivo) {}

void Parejas::mezclarTablero() {}

bool Parejas::descubrirCasilla(int x1, int y1, int y2) {}
