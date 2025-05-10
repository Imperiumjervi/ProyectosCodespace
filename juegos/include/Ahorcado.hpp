#pragma once
#include "Juego.hpp"
#include <string>

class Ahorcado : public Juego {
public:
  std::string palabraOculta;
  std::string palabraAdivinada;
  int intentosRestantes;
  bool esCPU;
  std::string jugadorGenerador;

  Ahorcado();
  Ahorcado(std::string jugador, bool esCPU, std::string jugadorGenerador);
  void iniciar() override;
  void setPalabrasDesdeArchivo(std::string rutaArchivo);
  void generarPalabraAleatoria();
  bool adivinarLetra(char letra);
};
