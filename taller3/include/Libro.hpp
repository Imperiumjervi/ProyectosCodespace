#pragma once
#include "Material.hpp"

#include <string>
class Libro : public Material {
public:
  std::string isbn;
  std::string autor;
  int cantidadPaginas;

  Libro(std::string titulo, std::string genero, std::string isbn,
        std::string autor, int paginas);

  void mostrarInformacion() override;
  std::string getTipo() override;
};
