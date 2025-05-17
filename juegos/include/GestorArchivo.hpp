#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

class GestorArchivo {
public:
  std::string rutaArchivo;
  GestorArchivo(std::string rutaArchivo);
  void guardarPartida(std::string &datos);
  void verHistorial();
  void eliminarPartida();
  void listarPartidas();
};
