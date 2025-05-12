#include "MenuPrincipal.hpp"
#include "Ahorcado.hpp"
#include "GestorArchivo.hpp"
#include "Juego.hpp"
#include "MenuPrincipal.hpp"
#include "Parejas.hpp"
#include <iostream>

MenuPrincipal::MenuPrincipal() = default;
void MenuPrincipal::mostrarMenu() {
  std::cout << "Bienvenido, elija una opcion:" << std::endl;
  std::cout << "1. Ahorcado" << std::endl;
  std::cout << "2. Parejas" << std::endl;
  std::cout << "3. Salir" << std::endl;
}

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

void MenuPrincipal::menuParejas() {
  std::cout << "Parejas" << std::endl;
  std::cout << "1. Jugar" << std::endl;
  std::cout << "2. Ver puntuaciones" << std::endl;
  std::cout << "3. Salir" << std::endl;
}

void MenuPrincipal::mostrarMenu() {
  std::cout << "Bienvenido";
  std::cout << "\nSeleccione el juego que desea jugar:\n";
  std::cout << "1. Ahorcado\n";
  std::cout << "2. Parejas\n";
  std::cout << "3. Salir\n";
  std::cout << "Ingrese su opción: ";

  int opcion = 0;
  std::cin >> opcion;
  ejecutarJuego(opcion);
  if (opcion == 3) {
    std::cout << "Saliendo del juego...\n";
    return;
  }
  std::cout << "Opción inválida. Por favor, intente de nuevo.\n";
  mostrarMenu();
}

void MenuPrincipal::ejecutarJuego(int opcion) {

  switch (opcion) {

  case 1: {
    // Código para ejecutar el juego Ahorcado
    Ahorcado ahorcado;
    ahorcado.iniciar();
    break;
  }
  case 2: {
    // Código para ejecutar el juego Parejas
    Parejas parejas;
    parejas.iniciar();
    break;
  }
  default:
    std::cout << "Opción inválida";
    break;
  }
}
