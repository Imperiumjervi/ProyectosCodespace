#pragma once
#include "GestorArchivo.hpp"

class MenuPrincipal {
public:
  MenuPrincipal();
  static void mostrarMenu();

  static void ejecutarJuego(int opcion);

  // Crea Juego

  // Puntero Gestor de archivo
  GestorArchivo *gestor{};
};
