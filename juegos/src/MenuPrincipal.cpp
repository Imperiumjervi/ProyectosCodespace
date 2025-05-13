#include "MenuPrincipal.hpp"
#include "Ahorcado.hpp"
#include "Parejas.hpp"
#include <iostream>

MenuPrincipal::MenuPrincipal() {
  // Aqui se aplica el puntero para que se guarden los resultados de las
  // partidas
  gestor = new GestorArchivo("resultados_generales.txt");
}

// Muestra el menú principal
void MenuPrincipal::mostrarMenu() {
  int opcion;

  do {
    std::cout << "\n=== MENU PRINCIPAL ===\n";
    std::cout << "1. Jugar Ahorcado\n";
    std::cout << "2. Jugar Parejas (Concentrese)\n";
    std::cout << "3. Ver historial de partidas\n";
    std::cout << "4. Eliminar historial\n";
    std::cout << "0. Salir\n";
    std::cout << "Selecciona una opcion: ";
    std::cin >> opcion;

    ejecutarJuego(opcion);
  } while (opcion != 0);
}

void MenuPrincipal::ejecutarJuego(int opcion) {
  switch (opcion) {
  case 1:
    menuAhorcado();
    break;
  case 2:
    menuParejas();
    break;
  case 3:
    gestor->listarPartidas();
    break;
  case 4:
    gestor->eliminarPartida();
    break;
  case 0:
    std::cout << "¡Gracias por jugar!\n";
    break;
  default:
    std::cout << "Opcion invalida.\n";
    break;
  }
}

void MenuPrincipal::menuAhorcado() {
  std::string jugador, generador;
  bool contraCPU;
  int opcion;

  std::cout << "Ingresa tu nombre: ";
  std::cin >> jugador;

  std::cout << "¿Quieres jugar contra la CPU? (1 = sí, 0 = no): ";
  std::cin >> opcion;
  contraCPU = (opcion == 1);

  if (!contraCPU) {
    std::cout << "Nombre del jugador que genera la palabra: ";
    std::cin >> generador;
  } else {
    generador = "CPU";
  }

  Ahorcado juego(jugador, 0, "", contraCPU, generador);
  juego.iniciar();
}

void MenuPrincipal::menuParejas() {
  std::string jugador;
  std::cout << "Ingresa tu nombre: ";
  std::cin >> jugador;

  Parejas juego(jugador, 0, "", 4, 4);
  juego.iniciar();
}
