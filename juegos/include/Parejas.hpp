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
  Parejas(std::string jugador, int puntuacion, std::string fecha, int filas,
          int columnas);
  void iniciar() override;

  void cargarSimbolosDesdeArchivo(const std::string &rutaArchivo);
  void mostrarTablero(const bool descubiertas[4][4]);
  bool descubrirCasilla(int pos1, int pos2);
  void mostrarTableroConSelecion(bool descubiertas[4][4], int pos1, int pos2);
};
