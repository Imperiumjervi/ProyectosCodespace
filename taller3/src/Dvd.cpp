#include "../include/Dvd.hpp"
#include <iostream>

Dvd::Dvd(std::string titulo, std::string genero, std::string id,
         std::string director, std::string duracion)
    : Material(titulo, genero), id(id), director(director), duracion(duracion) {
}

void Dvd::mostrarInformacion() {
  std::cout << "Titulo: " << titulo << "\n"
            << "Genero: " << genero << "\n"
            << "ID: " << id << "\n"
            << "Director: " << director << "\n"
            << "Duracion: " << duracion << "\n";
}

std::string Dvd::getTipo() { return "Dvd"; }
