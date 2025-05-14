#pragma once
#include "Juego.hpp"
#include <string>

class Parejas : public Juego {
public:
  char tablero[4][4]{};
  int filas;
  int columnas;
  int parejasEncontradas{};
  std::string jugador2;
  int puntosJugador1{0};
  int puntosJugador2{0};
  int turnoActual{1}; // 1 o 2

  Parejas(std::string jugador, int filas, int columnas);
  void iniciar() override;

  void cargarSimbolosDesdeArchivo(const std::string &rutaArchivo);
  void mostrarTablero(const bool descubiertas[4][4]);
  bool descubrirCasilla(int pos1, int pos2);
};
