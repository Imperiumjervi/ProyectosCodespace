#include "../include/GestorArchivo.hpp"
#include <iostream>
#include <string>
#include <utility>
#include <vector>

GestorArchivo::GestorArchivo(std::string ruta) : rutaArchivo(std::move(ruta)) {}

void GestorArchivo::guardarPartida(const std::string& datos) {}
