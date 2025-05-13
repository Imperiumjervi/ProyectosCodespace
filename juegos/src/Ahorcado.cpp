#include "Ahorcado.hpp"
#include <fstream>
#include <iostream>
#include <random>
#include <string>
#include <utility>
#include <vector>

Ahorcado::Ahorcado(std::string jugador, int puntuacion, std::string fecha,
                   bool esCPU, std::string jugadorGenerador)
    : Juego(jugador, puntuacion, fecha), esCPU(esCPU),
      jugadorGenerador(std::move(jugadorGenerador)) {
  intentosRestantes = 7;
}

void Ahorcado::iniciar() {
  generarPalabraAleatoria();
  palabraAdivinada = std::string(palabraOculta.length(), '_');
  std::cout << "Bienvenido al juego del Ahorcado!" << std::endl;
  std::cout << "Palabra a adivinar: " << palabraAdivinada << std::endl;

  while (intentosRestantes > 0 && palabraAdivinada != palabraOculta) {
    char letra;
    std::cout << "Ingrese una letra: ";
    std::cin >> letra;

    if (adivinarLetra(letra)) {
      std::cout << "Vas bien" << std::endl;
    } else {
      std::cout << "fallaste, te quedan " << intentosRestantes << " intentos"
                << std::endl;
    }

    std::cout << "Palabra: " << palabraAdivinada << std::endl;
  }

  if (palabraAdivinada == palabraOculta) {
    std::cout << "Ganaste rey/ina" << std::endl;
    guardarResultado("G");
  } else {
    std::cout << "Perdiste, la palabra era: " << palabraOculta << std::endl;
    guardarResultado("P");
  }
}

void Ahorcado::setPalabrasDesdeArchivo(std::string rutaArchivo) {
  std::ifstream archivo(rutaArchivo);
  std::vector<std::string> palabras;
  std::string linea;

  if (archivo.is_open()) {
    while (std::getline(archivo, linea)) {
      if (!linea.empty())
        palabras.push_back(linea);
    }
    archivo.close();

    if (palabras.empty()) {
      std::cerr << "El archivo no contiene palabras." << std::endl;
    } else {
      std::random_device rd;
      std::mt19937 gen(rd());
      std::uniform_int_distribution<> dis(0, palabras.size() - 1);
      palabraOculta = palabras[dis(gen)];
    }
  }
}

void Ahorcado::generarPalabraAleatoria() {
  std::vector<std::string> palabras = {
      "ejemplo", "programacion", "juego",   "ahorcado",
      "c++",     "desarrollo",   "software"}; // Aqui se reemplaza el vector
  std::random_device
      rd; // Se usa la libreria <random> para generar un numero aleatorio
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(
      0, palabras.size() - 1); // Aqui se reemplaza el numero por el equivalete
                               // a la cantidad de palabras
  std::string palabra = palabras[dis(gen)];
  palabraOculta = palabra; // Se asigna la palabra aleatoria a la variable
}

bool Ahorcado::adivinarLetra(char letra) {
  bool acierto = false;
  for (size_t i = 0; i < palabraOculta.length(); i++) {
    if (palabraOculta[i] == letra && palabraAdivinada[i] == '_') {
      palabraAdivinada[i] = letra;
      acierto = true;
    }
  }
  if (!acierto)
    intentosRestantes--;
  return acierto;
}
