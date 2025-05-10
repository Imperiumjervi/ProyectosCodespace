#pragma once
#include "Juego.hpp"
#include <string>

class Parejas : public Juego {
public:
  char tablero[4][4]{};
  int filas;
  int columnas;
  int parejasEncontradas{};

  Parejas();
  Parejas(std::string jugador, int filas, int columnas);
  void iniciar() override;

  static void cargarSimbolosDesdeArchivo(const std::string& rutaArchivo);
  void mezclarTablero();
  bool descubrirCasilla(int x1, int y1, int y2);
};
