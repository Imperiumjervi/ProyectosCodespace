#include "Juego.hpp"
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

Juego::Juego(std::string jugador, int puntuacion, std::string fecha)
    : jugador(jugador), puntuacion(puntuacion), fecha(fecha) {
  if (fecha.empty()) {
    this->fecha = obtenerFechaActual();
  }
}

Juego::~Juego() {
  // Destructor
}

void Juego::guardarResultado(std::string resultado) {
  std::ofstream archivo("resultados_generales.txt", std::ios::app);
  if (archivo.is_open()) {
    archivo << fecha << " " << jugador << " " << nombreJuego << " " << " "
            << resultado << " " << puntuacion << std::endl;
  } else {
    std::cerr << "No se pudo abrir el archivo para guardar el resultado"
              << std::endl;
  }
}

std::string Juego::obtenerFechaActual() {
  time_t ahora = time(0);
  tm *tiempoLocal = localtime(&ahora);
  char buffer[20];
  strftime(buffer, sizeof(buffer), "%Y-%m-%d", tiempoLocal);
  return std::string(buffer);
}
