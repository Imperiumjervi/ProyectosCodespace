#include "../include/Libro.hpp"
#include <iostream>

Libro::Libro(std::string titulo, std::string genero, std::string isbn,
             std::string autor, int paginas)
    : Material(titulo, genero), isbn(isbn), autor(autor),
      cantidadPaginas(paginas) {
  disponible = true;
}

void Libro::mostrarInformacion() {
  std::cout << "Titulo: " << titulo << "\n"
            << "Genero: " << genero << "\n"
            << "ISBN: " << isbn << "\n"
            << "Autor: " << autor << "\n"
            << "Cantidad de Paginas: " << cantidadPaginas << "\n"
            << "Disponible: " << (disponible ? "Si" : "No") << "\n";
}

std::string Libro::getTipo() { return "Libro"; }

void Libro::setIsbn(std::string isbn) { this->isbn = isbn; }
void Libro::setAutor(std::string autor) { this->autor = autor; }
void Libro::setCantidadPaginas(int paginas) { this->cantidadPaginas = paginas; }
std::string Libro::getIsbn() { return isbn; }
std::string Libro::getAutor() { return autor; }
int Libro::getCantidadPaginas() { return cantidadPaginas; }
