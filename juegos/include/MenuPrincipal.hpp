#pragma once
#include "GestorArchivo.hpp"

class MenuPrincipal {
public:
  MenuPrincipal();
  void mostrarMenu();
  void menuAhorcado();
  void menuParejas();
  void ejecutarJuego(int opcion);

  // Crea Juego

  // Puntero Gestor de archivo
  GestorArchivo *gestor;
};
