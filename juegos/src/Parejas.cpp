#include "Parejas.hpp"
#include "Juego.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <random>
#include <string>

Parejas::Parejas(std::string jugador, int puntuacion, std::string fecha,
                 int filas, int columnas)
    : Juego(jugador, puntuacion, fecha), filas(filas), columnas(columnas) {}

void Parejas::iniciar() {
  cargarSimbolosDesdeArchivo("simbolos.txt");

  bool descubiertas[4][4]{};
  int totalParejas = (filas * columnas) / 2;

  while (parejasEncontradas < totalParejas) {
    int x1, y1, x2, y2;
    std::cout << "Ingresa las Coordenadas de dos casillas (x1, y1, x2, y2): ";
    std::cin >> x1 >> y1 >> x2 >> y2;

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

    if (tablero[x1][y1] == tablero[x2][y2]) {
      std::cout << "Pareja encontrada!" << std::endl;
      parejasEncontradas++;
      descubiertas[x1][y1] = true;
      descubiertas[x2][y2] = true;
    } else {
      std::cout << "No es una pareja" << std::endl;
    }
  }

  std::cout << "Felicidades, encontraste todas las parejas!" << std::endl;
  guardarResultado("G");
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

bool Parejas::descubrirCasilla(int x1, int y1, int x2) {
  if (x1 < 0 || x1 >= filas || y1 < 0 || y1 >= columnas || x2 < 0 ||
      x2 >= filas) {
    std::cerr << "Coordenadas fuera de rango" << std::endl;
    return false;
  }

  std::cout << "Primera casilla: " << tablero[x1][y1] << std::endl;
  std::cout << "Segunda casilla: " << tablero[x2][y1] << std::endl;

  if (tablero[x1][y1] == tablero[x2][y1]) {
    std::cout << "Pareja encontrada!" << std::endl;
    parejasEncontradas++;
    return true;
  } else {
    std::cout << "No es una pareja" << std::endl;
    return false;
  }
}
