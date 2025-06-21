#pragma once
#include "Juego.hpp"
#include <string>

class Ahorcado : protected Juego {
private:
  std::string palabraOculta;
  std::string palabraAdivinada;
  int intentosRestantes{};
  bool esCPU;
  std::string jugadorGenerador;

public:
  Ahorcado();
  Ahorcado(std::string jugador, int puntuacion, std::string fecha, bool esCPU,
           std::string jugadorGenerador);
  void iniciar() override;

  void setPalabrasDesdeArchivo(std::string rutaArchivo);
  void generarPalabraAleatoria();
  bool adivinarLetra(char letra);

  // Asi con condicionales pienso dibujar el Ahorcado
  void dibujarCabeza();
  void dibujarCuerpo();
  void dibujarBrazos();
  void dibujarPiernas();
  void dibujarAhorcado();

  void setPalabraOculta(std::string &palabra);
  void setPalabraAdivinada(std::string &palabra);
  void setEsCPU(bool esCPU);
  void setJugadorGenerador(std::string &jugadorGenerador);
  std::string getPalabraOculta();
  std::string getPalabraAdivinada();
  bool getEsCPU();
  std::string getJugadorGenerador();
};
