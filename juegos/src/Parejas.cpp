#include "Parejas.hpp"
#include "Juego.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <random>
#include <string>

Parejas::Parejas() : Juego("", 0, ""), filas(0), columnas(0) {}

Parejas::Parejas(std::string jugador, int puntuacion, std::string fecha,int filas, int columnas)
    : Juego(jugador, puntuacion, fecha), filas(filas), columnas(columnas) {}


  int Parejas::LeerPuntuacion() {
  std::ifstream archivo("puntuacion.txt");
  if (archivo.is_open()) {
    archivo >> puntuacion;
    archivo.close();
  } else {
    std::cerr << "No se pudo abrir el archivo de puntuacion." << std::endl;
    puntuacion = 0; // Si no se puede abrir el archivo, se inicializa la puntuación a 0
  }
  return puntuacion;
}
    
void Parejas::iniciar() {
  nombreJuego = "Parejas";
  std::cout << "Bienvenido al juego de Parejas!" << std::endl;
  LeerPuntuacion();
  cargarSimbolosDesdeArchivo("simbolos.txt");

  bool descubiertas[4][4]{};
  int totalParejas = (filas * columnas) / 2;

  while (parejasEncontradas < totalParejas) {
    mostrarTablero(descubiertas);
    int pos1, pos2;
    std::cout << "Ingresa las Coordenadas de dos casillas (pos1 pos2): ";
    std::cin >> pos1 >> pos2;

    int x1 = pos1 / columnas;
    int y1 = pos1 % columnas;
    int x2 = pos2 / columnas;
    int y2 = pos2 % columnas;

    if (x1 == x2 && y1 == y2) {
      std::cout << "No puedes elegir la misma casilla dos veces" << std::endl;
      continue;
    }

    if (descubiertas[x1][y1] || descubiertas[x2][y2]) {
      std::cout << "Ya descubriste una de esas casillas " << std::endl;
      continue;
    }

    std::cout << "primera casilla: " << tablero[x1][y1] << std::endl;
    std::cout << "segunda casilla: " << tablero[x2][y2] << std::endl;

    if (descubrirCasilla(pos1, pos2)) {
      descubiertas[x1][y1] = true;
      descubiertas[x2][y2] = true;
    }

    // system("clear"); --> Tiene que ir para que limpie
  }

  std::cout << "Felicidades, encontraste todas las parejas!" << std::endl;
  puntuacion++;
  guardarResultado("G");
  std::cout << "Tu puntuacion es: " << puntuacion << std::endl;
}

void Parejas::mostrarTablero(const bool descubiertas[4][4]) {
  std::cout << "   ";
  for (int j = 0; j < columnas; ++j) {
    std::cout << j << " ";
  }
  std::cout << "\n";

  for (int i = 0; i < filas; ++i) {
    std::cout << i << ": ";
    for (int j = 0; j < columnas; ++j) {
      if (descubiertas[i][j]) {
        std::cout << tablero[i][j] << " ";
      } else {
        std::cout << "* ";
      }
    }
    std::cout << "\n";
  }
}

void Parejas::cargarSimbolosDesdeArchivo(const std::string &rutaArchivo) {
  std::ifstream archivo(rutaArchivo);
  std::vector<char> simbolos;
  char c;

  if (!archivo.is_open()) {
    std::cerr << "No se pudo abrir el archivo: " << rutaArchivo << std::endl;
  }

  while (archivo >> c) {
    simbolos.push_back(c);
  }

  int totalCasillas = filas * columnas;
  if (simbolos.size() * 2 < totalCasillas) {
    std::cerr << "No hay suficientes simbolos" << std::endl;
    return;
  }

  std::vector<char> pares;
  for (int i = 0; i < totalCasillas / 2; i++) {
    pares.push_back(simbolos[i]);
    pares.push_back(simbolos[i]);
  }

  // mezclarTablero
  std::random_device rd;
  std::mt19937 gen(rd());
  std::shuffle(pares.begin(), pares.end(), gen);

  // Llenar tablero
  int k = 0;
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      tablero[i][j] = pares[k++];
    }
  }
}

bool Parejas::descubrirCasilla(int pos1, int pos2) {
  int x1 = pos1 / columnas;
  int y1 = pos1 % columnas;
  int x2 = pos2 / columnas;
  int y2 = pos2 % columnas;

  if (x1 == x2 && y1 == y2) {
    std::cout << "No puedes elegir la misma casilla dos veces" << std::endl;
    return false;
  }

  if (tablero[x1][y1] == tablero[x2][y2]) {
    std::cout << "Pareja encontrada!" << std::endl;
    parejasEncontradas++;
    return true;
  }
  return false;
}
