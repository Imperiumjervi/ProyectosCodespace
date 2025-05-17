#pragma once
#include "Material.hpp"
#include <string>

class Revista : public Material {
public:
  std::string id;
  std::string tematica;
  std::string edicion;

  Revista(std::string nombre, std::string tematica, std::string edicion,
          std::string id);

  void mostrarInformacion() override;
  std::string getTipo() override;
};
