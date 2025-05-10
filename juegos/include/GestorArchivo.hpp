#pragma once
#include <string>
#include <utility>
#include <vector>

class GestorArchivo {
public:
  std::string rutaArchivo;

  GestorArchivo(std::string ruta);
  void guardarPartida(std::string datos);
  std::vector<std::string> cargarPalabras();
  std::vector<std::pair<char, char>> cargarParejas();
};
