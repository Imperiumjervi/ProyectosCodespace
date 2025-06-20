#pragma once
#include <string>

class GestorArchivo {
public:
  std::string rutaArchivo;
  GestorArchivo(std::string rutaArchivo);
  void guardarPartida(std::string &datos);
  void cargarPartida();
  void eliminarPartida();
  void listarPartidas();
};
