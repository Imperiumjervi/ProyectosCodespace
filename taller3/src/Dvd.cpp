#include "../include/Dvd.hpp"
#include <iostream>

Dvd::Dvd(std::string titulo, std::string genero, std::string id,
         std::string director, std::string duracion)
    : Material(titulo, genero), id(id), director(director), duracion(duracion) {
  disponible = true;
}

void Dvd::mostrarInformacion() {
  std::cout << "Titulo: " << titulo << "\n"
            << "Genero: " << genero << "\n"
            << "ID: " << id << "\n"
            << "Director: " << director << "\n"
            << "Duracion: " << duracion << "\n"
            << "Disponible: " << (disponible ? "Si" : "No") << "\n";
}

std::string Dvd::getTipo() { return "Dvd"; }
void Dvd::setId(std::string id) { this->id = id; }
void Dvd::setDirector(std::string director) { this->director = director; }
void Dvd::setDuracion(std::string duracion) { this->duracion = duracion; }
std::string Dvd::getId() { return id; }
std::string Dvd::getDirector() { return director; }
std::string Dvd::getDuracion() { return duracion; }
