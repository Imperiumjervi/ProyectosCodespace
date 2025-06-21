#pragma once
#include "Juego.hpp"
#include <string>

class Parejas : protected Juego {
private:
  char tablero[4][4]{};
  int filas;
  int columnas;
  int parejasEncontradas{};

public:
  Parejas();
  Parejas(std::string jugador, int puntuacion, std::string fecha, int filas,
          int columnas);
  void iniciar() override;

  void cargarSimbolosDesdeArchivo(const std::string &rutaArchivo);
  void mostrarTablero(const bool descubiertas[4][4]);
  bool descubrirCasilla(int pos1, int pos2);
  void mostrarTableroConSelecion(bool descubiertas[4][4], int pos1, int pos2);

  void setFilas(int filas);
  void setColumnas(int columnas);
  void setParejasEncontradas(int parejasEncontradas);
  int getFilas();
  int getColumnas();
  int getParejasEncontradas();
};
