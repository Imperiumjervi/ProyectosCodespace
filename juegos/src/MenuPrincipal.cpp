#include "../include/MenuPrincipal.hpp"
#include <iostream>

MenuPrincipal::MenuPrincipal() {}

void MenuPrincipal::mostrarMenu() { std::cout << "Bienvenido"; }

void MenuPrincipal::menuAhorcado() {
  int opcion;

  std::cout << "Menu Ahorcado" << std::endl;
  std::cout << "1. Jugador vs Cpu" << std::endl;
  std::cout << "2. Jugador vs Jugador" << std::endl;
  std::cout << "3. Ver puntuaciones" << std::endl;
  std::cout << "0. Salir" << std::endl;

  std::cout << "Seleccione una opcion: ";
  std::cin >> opcion;
  switch (opcion) {
  case 1:
    std::cout << "Jugador vs CPU" << std::endl;
    break;
  case 2:
    std::cout << "Jugador vs Jugador" << std::endl;
    std::cout << "quien elige la palabra?" << std::endl;
    std::cout << "1. Jugador 1" << std::endl;
    std::cout << "2. Jugador 2" << std::endl;
    std::cout << "Seleccione una opcion: ";
    int opcionJugador;
    std::cin >> opcionJugador;
    if (opcionJugador == 1) {
      std::cout << "Jugador 1 elige la palabra" << std::endl;
    } else if (opcionJugador == 2) {
      std::cout << "Jugador 2 elige la palabra" << std::endl;
    } else {
      std::cout << "Opcion invalida" << std::endl;
    }
    break;
  case 3:
    std::cout << "Ver puntuaciones" << std::endl;
    break;
  case 0:
    std::cout << "Saliendo..." << std::endl;
    break;
  default:
    std::cout << "Opcion invalida" << std::endl;
    break;
  }
}

void MenuPrincipal::ejecutarJuego(int opcion) {}
