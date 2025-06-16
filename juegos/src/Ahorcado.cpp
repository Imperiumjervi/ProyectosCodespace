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

/*void Ahorcado::iniciar() {
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
    puntuacion += 10; // Se suma 10 puntos al puntaje
  } else {
    std::cout << "Perdiste, la palabra era: " << palabraOculta << std::endl;
    guardarResultado("P");
  }
}*/

void Ahorcado::iniciar() {
  generarPalabraAleatoria();
  palabraAdivinada = std::string(palabraOculta.length(), '_');

  while (intentosRestantes > 0 && palabraAdivinada != palabraOculta) {
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");
#endif

    std::cout << "Bienvenido al juego del Ahorcado!" << std::endl;
    dibujarAhorcado();

    std::cout << "Intentos restantes: " << intentosRestantes << std::endl;
    std::cout << "Palabra: " << palabraAdivinada << std::endl;

    char letra;
    std::cout << "Ingrese una letra: ";
    std::cin >> letra;

    if (adivinarLetra(letra)) {
      std::cout << "¡Bien hecho!" << std::endl;
    } else {
      std::cout << "Fallaste." << std::endl;
    }

    std::cout << "\nPresiona Enter para continuar...";
    std::cin.get();
    std::cin.get(); // Espera Enter
  }

#ifdef _WIN32
  std::system("cls");
#else
  std::system("clear");
#endif

  dibujarAhorcado();

  if (palabraAdivinada == palabraOculta) {
    std::cout << "¡Ganaste rey/ina!\n";
    guardarResultado("G");
    puntuacion += 10;
  } else {
    std::cout << "Perdiste, la palabra era: " << palabraOculta << "\n";
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
  std::ifstream archivo("palabras.txt");
  std::vector<std::string> palabras;
  std::string linea;

  if (!archivo.is_open()) {
    std::cerr << "no se puede abrir el archivo palabras.txt " << std::endl;
    return;
  }

  while (std::getline(archivo, linea)) {
    if (!linea.empty()) {
      palabras.push_back(linea);
    }
  }

  archivo.close();

  if (palabras.empty()) {
    std::cerr << "No se encontraron palabras en el archivo" << std::endl;
    return;
  }

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0, palabras.size() - 1);

  palabraOculta = palabras[dis(gen)];
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

void Ahorcado::dibujarCabeza() { std::cout << "  O" << std::endl; }

void Ahorcado::dibujarCuerpo() { std::cout << "  |" << std::endl; }

void Ahorcado::dibujarBrazos() { std::cout << " /|\\ " << std::endl; }

void Ahorcado::dibujarPiernas() { std::cout << " / \\" << std::endl; }

void Ahorcado::dibujarAhorcado() {
  std::cout << "_______" << std::endl;
  std::cout << "|     |" << std::endl;

  int parte = 7 - intentosRestantes;
  if (parte >= 1)
    dibujarCabeza();
  else
    std::cout << std::endl;
  if (parte >= 2)
    dibujarCuerpo();
  else
    std::cout << std::endl;
  if (parte >= 3)
    dibujarBrazos();
  else
    std::cout << std::endl;
  if (parte >= 4)
    dibujarPiernas();
  else
    std::cout << std::endl;
  std::cout << "=========" << std::endl;
}
