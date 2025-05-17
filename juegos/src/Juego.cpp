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

/*void Juego::iniciar() {
  std::cout << "Iniciando el juego: " << nombreJuego << std::endl;
}*/

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

void Juego::Puntuacion() {
  std::ifstream archivo("resultados_generales.txt");
  if (archivo.is_open()) {
    std::string linea;
    while (std::getline(archivo, linea)) {
      std::cout << linea << std::endl;
    }
    archivo.close();
  } else {
    std::cerr << "No se pudo abrir el archivo para mostrar la puntuacion"
              << std::endl;
  }
}
void Juego::MostrarResultados() {
  std::ifstream archivo("resultados_generales.txt");
  if (archivo.is_open()) {
    std::string linea;
    while (std::getline(archivo, linea)) {
      std::cout << linea << std::endl;
    }
    archivo.close();
  } else {
    std::cerr << "No se pudo abrir el archivo para mostrar los resultados"
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
