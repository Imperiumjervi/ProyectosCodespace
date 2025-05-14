#include "../include/Libro.hpp"
#include <iostream>

Libro::Libro(std::string titulo, std::string genero, std::string isbn,
             std::string autor, int paginas)
    : Material(titulo, genero), isbn(isbn), autor(autor),
      cantidadPaginas(paginas) {}

void Libro::mostrarInformacion() {
  std::cout << "Titulo: " << titulo << "\n"
            << "Genero: " << genero << "\n"
            << "ISBN: " << isbn << "\n"
            << "Autor: " << autor << "\n"
            << "Cantidad de Paginas: " << cantidadPaginas << "\n";
}

std::string Libro::getTipo() { return "Libro"; }
