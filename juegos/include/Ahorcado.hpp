#pragma once
#include "Juego.hpp"
#include <string>

class Ahorcado : public Juego {
public:
  std::string palabraOculta;
  std::string palabraAdivinada;
  int intentosRestantes{};
  bool esCPU;
  std::string jugadorGenerador;

  Ahorcado();
  Ahorcado(std::string jugador, int puntuacion, std::string fecha, bool esCPU,
           std::string jugadorGenerador);
  void iniciar() override;

  void setPalabrasDesdeArchivo(std::string rutaArchivo);
  void generarPalabraAleatoria();
  bool adivinarLetra(char letra);
  // int leerPuntuacion();

  // Asi con condicionales pienso dibujar el Ahorcado
  void dibujarCabeza();
  void dibujarCuerpo();
  void dibujarBrazos();
  void dibujarPiernas();
  void dibujarAhorcado();
};
