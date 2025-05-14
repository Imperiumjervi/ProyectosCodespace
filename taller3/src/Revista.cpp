#include "../include/Revista.hpp"
#include <iostream>

Revista::Revista(std::string nombre, std::string tematica, std::string edicion,
                 std::string id)
    : Material(nombre, tematica), edicion(edicion), id(id) {}

void Revista::mostrarInformacion() {
  std::cout << "Revista: " << titulo << "\n"
            << "Tematica: " << genero << "\n"
            << "Edicion: " << edicion << "\n"
            << "ID: " << id << "\n"
            << "Disponible: " << (disponible ? "Si" : "No") << std::endl;
}

std::string Revista::getTipo() {}
