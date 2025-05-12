#include "Ahorcado.hpp"
#include <iostream>
#include <random>
#include <string>

Ahorcado::Ahorcado(std::string jugador, bool esCPU,
                   std::string jugadorGenerador)
    : Juego(jugador), esCPU(esCPU), jugadorGenerador(jugadorGenerador) {}

void Ahorcado::iniciar() {}

void Ahorcado::setPalabrasDesdeArchivo(std::string rutaArchivo) {}

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
