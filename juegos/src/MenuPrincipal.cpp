#include "../include/MenuPrincipal.hpp"

MenuPrincipal::MenuPrincipal() {
  gestor = new GestorArchivo("resultados_generales.txt");
}

void MenuPrincipal::mostrarMenu() { std::cout << "Bienvenido"; }

void MenuPrincipal::ejecutarJuego(int opcion) {}
