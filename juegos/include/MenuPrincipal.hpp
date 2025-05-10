#pragma once
#include "GestorArchivo.hpp"

class MenuPrincipal {
public:
  MenuPrincipal();
  void mostrarMenu();
  void ejecutarJuego(int opcion);

  // Crea Juego

  // Puntero Gestor de archivo
  GestorArchivo *gestor;
};
