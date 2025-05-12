#include "GestorArchivo.hpp"
#include <iostream>
#include <string>
#include <utility>

GestorArchivo::GestorArchivo(std::string rutaArchivo)
    : rutaArchivo(std::move(rutaArchivo)) {
  // Verifica si la ruta del archivo es válida
  // Verifica si el archivo existe, si no, lo crea
  if (std::ifstream archivoLectura(this->rutaArchivo); !archivoLectura.good()) {
    if (std::ofstream archivoNuevo(this->rutaArchivo); !archivoNuevo) {
      std::cerr << "No se pudo crear el archivo: " << this->rutaArchivo
                << std::endl;
    }
  }
}

void GestorArchivo::guardarPartida(const std::string &datos) {}

void GestorArchivo::cargarPartida() {}

void GestorArchivo::eliminarPartida() {}

void GestorArchivo::listarPartidas() {}
