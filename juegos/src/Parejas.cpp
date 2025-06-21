#include "Parejas.hpp"
#include "Juego.hpp"
#include <cstdlib>
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
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");
#endif

    mostrarTablero(descubiertas);
    int pos1, pos2;
    std::cout << "Ingresa dos posiciones (pos1 pos2): ";
    std::cin >> pos1 >> pos2;

    int x1 = pos1 / columnas;
    int y1 = pos1 % columnas;
    int x2 = pos2 / columnas;
    int y2 = pos2 % columnas;

    if (x1 == x2 && y1 == y2) {
      std::cout << "No puedes elegir la misma casilla dos veces\n";
      std::cin.get();
      std::cin.get();
      continue;
    }

    if (descubiertas[x1][y1] || descubiertas[x2][y2]) {
      std::cout << "Ya descubriste una de esas casillas\n";
      std::cin.get();
      std::cin.get();
      continue;
    }

// Mostrar el tablero con las dos seleccionadas visibles
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");
#endif
    mostrarTableroConSelecion(descubiertas, pos1, pos2);
    if (descubrirCasilla(pos1, pos2)) {
      descubiertas[x1][y1] = true;
      descubiertas[x2][y2] = true;
    }

    std::cout << "\nPresiona Enter para continuar...";
    std::cin.get();
    std::cin.get();
  }

#ifdef _WIN32
  std::system("cls");
#else
  std::system("clear");
#endif
  mostrarTablero(descubiertas);
  std::cout << "¡Felicidades, encontraste todas las parejas!\n";
  guardarResultado("G");
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

void Parejas::mostrarTableroConSelecion(bool descubiertas[4][4], int pos1,
                                        int pos2) {
  int x1 = pos1 / columnas;
  int y1 = pos1 % columnas;
  int x2 = pos2 / columnas;
  int y2 = pos2 % columnas;

  std::cout << "   ";
  for (int j = 0; j < columnas; ++j)
    std::cout << j << " ";
  std::cout << "\n";

  for (int i = 0; i < filas; ++i) {
    std::cout << i << ": ";
    for (int j = 0; j < columnas; ++j) {
      if (descubiertas[i][j] || (i == x1 && j == y1) || (i == x2 && j == y2)) {
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
  for (int i = pares.size() - 1; i > 0; --i) {
    std::uniform_int_distribution<> dis(0, i);
    int j = dis(gen);
    std::swap(pares[i], pares[j]);
  }

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

void Parejas::setFilas(int filas) { this->filas = filas; }
void Parejas::setColumnas(int columnas) { this->columnas = columnas; }
void Parejas::setParejasEncontradas(int parejasEncontradas) {
  this->parejasEncontradas = parejasEncontradas;
}

int Parejas::getFilas() { return filas; }
int Parejas::getColumnas() { return columnas; }
int Parejas::getParejasEncontradas() { return parejasEncontradas; }
