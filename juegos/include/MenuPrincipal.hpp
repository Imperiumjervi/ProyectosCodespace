#pragma once
#include "GestorArchivo.hpp"

class MenuPrincipal {
public:
  MenuPrincipal();
<<<<<<< HEAD
  static void mostrarMenu();

  static void ejecutarJuego(int opcion);
=======
  void mostrarMenu();
  void menuAhorcado();
  void menuParejas();
  void ejecutarJuego(int opcion);
>>>>>>> CambiosJeffer

  // Crea Juego

  // Puntero Gestor de archivo
  GestorArchivo *gestor{};
};
