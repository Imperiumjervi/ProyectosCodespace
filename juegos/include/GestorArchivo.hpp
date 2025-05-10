#pragma once
#include <iostream>
#include <string>
#include <utility>
#include <vector>

class GestorArchivo {
public:
  std::string rutaArchivo;
  explicit GestorArchivo(std::string ruta);
  static void guardarPartida(const std::string& datos);
  std::vector<std::string> cargarPalabras();
  std::vector<std::pair<char, char>> cargarParejas();
};
