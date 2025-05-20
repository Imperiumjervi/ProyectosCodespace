#include "../include/Revista.hpp"
#include <iostream>

Revista::Revista(std::string nombre, std::string tematica, std::string edicion,
                 std::string id)
    : Material(nombre, tematica), edicion(edicion), id(id) {
  disponible = true;
}

void Revista::mostrarInformacion() {
  std::cout << "Revista: " << titulo << "\n"
            << "Tematica: " << genero << "\n"
            << "Edicion: " << edicion << "\n"
            << "ID: " << id << "\n"
            << "Disponible: " << (disponible ? "Si" : "No") << std::endl;
}

std::string Revista::getTipo() { return "Revista"; }
void Revista::setId(std::string id) { this->id = id; }
void Revista::setTematica(std::string tematica) { this->genero = tematica; }
void Revista::setEdicion(std::string edicion) { this->edicion = edicion; }
std::string Revista::getId() { return id; }
std::string Revista::getTematica() { return genero; }
std::string Revista::getEdicion() { return edicion; }
