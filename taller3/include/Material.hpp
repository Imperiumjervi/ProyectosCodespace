#pragma once

#include <string>
class Material {
public:
  std::string titulo;
  std::string genero;
  bool disponible;

  Material(std::string titulo, std::string genero);
  virtual ~Material();

  virtual void mostrarInformacion() = 0;
  virtual std::string getTipo() = 0;
  void registrarPrestamo();
  void registrarDevolucion();

  void setTitulo(std::string titulo);
  void setGenero(std::string genero);
  void setDisponible(bool disponible);
  std::string getTitulo();
  std::string getGenero();
  bool getDisponible();
};
