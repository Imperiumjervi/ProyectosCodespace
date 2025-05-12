#include "GestorArchivo.hpp"
#include <fstream>
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

void GestorArchivo::guardarPartida(std::string &datos) {
  std::ofstream archivo(this->rutaArchivo, std::ios::app);
  if (archivo.is_open()) {
    archivo << datos << std::endl;
    archivo.close();
  } else {
    std::cerr << "No se pudo abrir el archivo para guardar la partida: "
              << this->rutaArchivo << std::endl;
  }
}

void GestorArchivo::cargarPartida() {}

void GestorArchivo::eliminarPartida() {}

void GestorArchivo::listarPartidas() {}
