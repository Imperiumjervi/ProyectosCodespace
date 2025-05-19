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

  void setId(std::string id);
  void setTematica(std::string tematica);
  void setEdicion(std::string edicion);
  std::string getId();
  std::string getTematica();
  std::string getEdicion();
};
