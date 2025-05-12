#pragma once
#include <string>
#include <vector>
// Clase padre que tendra ahorcado y concentrese (Juego de juntar parejas)

class Juego {
public:
  std::string nombreJuego;
  std::string jugador;
  std::string fecha;
  std::vector<int> puntuacion;

  Juego(std::string jugador);
  virtual ~Juego();

  virtual void iniciar() = 0;
  virtual void guardarResultado(const std::string &resultado);
  std::string obtenerFechaActual();
};
