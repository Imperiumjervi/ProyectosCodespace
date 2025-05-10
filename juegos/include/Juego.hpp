#pragma once
#include <string>
// Clase padre que tendra ahorcado y concentrese (Juego de juntar parejas)

class Juego {
public:
  std::string nombreJuego;
  std::string jugador;
  std::string fecha;
  int puntuacion;

  Juego(std::string jugador);
  virtual ~Juego();

  virtual void iniciar() = 0;
  virtual void guardarResultado(std::string resultado);
  std::string obtenerFechaActual();
};
