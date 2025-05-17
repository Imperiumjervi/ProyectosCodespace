#pragma once
#include <string>
#include <vector>
// Clase padre que tendra ahorcado y concentrese (Juego de juntar parejas)

class Juego {
public:
  std::string nombreJuego;
  std::string jugador;
  std::string fecha;
  int puntuacion;

  Juego(std::string jugador, int puntuacion, std::string fecha);
  virtual ~Juego();

  virtual void iniciar();
  virtual void guardarResultado(std::string resultado);
  virtual void MostrarResultados();
  std::string obtenerFechaActual();
  void Puntuacion();
  int LeerPuntuacion();
};
