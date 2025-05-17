#include "../include/MenuPrincipal.hpp"

MenuPrincipal::MenuPrincipal() {
  // Aqui se aplica el puntero para que se guarden los resultados de las
  // partidas
  gestor = new GestorArchivo("resultados_generales.txt");
}

void MenuPrincipal::mostrarMenu() { std::cout << "Bienvenido"; }

void MenuPrincipal::ejecutarJuego(int opcion) {}
