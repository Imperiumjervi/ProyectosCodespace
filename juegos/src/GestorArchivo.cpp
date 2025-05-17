#include "GestorArchivo.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <utility>

GestorArchivo::GestorArchivo(std::string rutaArchivo)
    : rutaArchivo(std::move(rutaArchivo)) {
  // Si el archivo no existe, lo crea
  std::ifstream archivoLectura(rutaArchivo);
  if (!archivoLectura.good()) {
    std::ofstream archivoNuevo(rutaArchivo);
    if (!archivoNuevo) {
      std::cerr << "No se pudo crear el archivo: " << rutaArchivo << std::endl;
    } else {
      std::cout << "Archivo creado exitosamente: " << rutaArchivo << std::endl;
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

void GestorArchivo::verHistorial() {
  std::ifstream archivo(rutaArchivo);
  std::string linea;

  if (!archivo.is_open()) {
    std::cerr << "No se pudo abrir el archivo: " << rutaArchivo << std::endl;
    return;
  }

  std::cout << "Contenido del archivo: " << std::endl;
  while (std::getline(archivo, linea)) {
    std::cout << linea << std::endl;
  }
  archivo.close();
}

void GestorArchivo::eliminarPartida() {
  std::ofstream archivo(rutaArchivo, std::ios::trunc);
  if (archivo.is_open()) {
    archivo.close();
    std::cout << "Partidas eliminadas exitosamente." << std::endl;
  } else {
    std::cerr << "No se pudo abrir el archivo para eliminar las partidas: "
              << rutaArchivo << std::endl;
  }
}

void GestorArchivo::listarPartidas() {
  std::ifstream archivo(rutaArchivo);
  std::string linea;

  if (!archivo.is_open()) {
    std::cerr << "No se pudo abrir el archivo: " << rutaArchivo << std::endl;
    return;
  }

  std::cout << "== Partidas registradas ==" << std::endl;
  while (std::getline(archivo, linea)) {
    std::cout << linea << std::endl;
  }
  archivo.close();
}
