#pragma once

#include "Material.hpp"
#include <string>
class Dvd : public Material {
public:
  std::string id;
  std::string director;
  std::string duracion;

  Dvd(std::string titulo, std::string genero, std::string id,
      std::string director, std::string duracion);

  void mostrarInformacion() override;
  std::string getTipo() override;
  void setId(std::string id);
  void setDirector(std::string director);
  void setDuracion(std::string duracion);
  std::string getId();
  std::string getDirector();
  std::string getDuracion();
};
