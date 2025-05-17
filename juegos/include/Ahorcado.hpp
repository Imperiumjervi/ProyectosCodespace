#pragma once
#include "Juego.hpp"
#include <string>
#include <vector>

class Ahorcado : public Juego {
public:
  std::string palabraOculta;
  std::string palabraAdivinada;
  int intentosRestantes{};
  bool esCPU;
  std::string jugadorGenerador;

  Ahorcado();
  Ahorcado(std::string jugador, bool esCPU, std::string jugadorGenerador);
  void iniciar() override;

  int LeerPuntuacion();
  void setPalabrasDesdeArchivo(std::string rutaArchivo);
  void generarPalabraAleatoria();
  bool adivinarLetra(char letra);
};
