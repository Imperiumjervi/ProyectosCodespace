#include "Ahorcado.hpp"
#include <iostream>
#include <random>
#include <string>
#include <utility>

Ahorcado::Ahorcado() : Juego(""), esCPU(false), jugadorGenerador("") {}

Ahorcado::Ahorcado(std::string jugador, const bool esCPU, std::string jugadorGenerador)
    : Juego(std::move(jugador)), esCPU(esCPU), jugadorGenerador(std::move(jugadorGenerador)) {}

void Ahorcado::iniciar() {}

void Ahorcado::setPalabrasDesdeArchivo(const std::string& rutaArchivo) {}

void Ahorcado::generarPalabraAleatoria() {
  std::vector<std::string> palabras = {"ejemplo", "programacion", "juego"};
  std::random_device
      rd; // Se usa la libreria <random> para generar un numero aleatorio
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(
      0, palabras.size() - 1); // Aqui se reemplaza el numero por el equivalete
                               // a la cantidad de palabras
  std::string palabra = palabras[dis(gen)];
}

bool Ahorcado::adivinarLetra(char letra) { return false; }
