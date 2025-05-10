#pragma once
#include <map>
#include <string>
#include <vector>

class GestorArchivo {
public:
  std::string rutaArchivo;

  GestorArchivo(std::string ruta);
  void guardarPartida(std::string datos);
  std::vector<std::string> cargarPalabras();
  std::map<char, char> cargarParejas();
};
