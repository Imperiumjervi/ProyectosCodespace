#include "../include/CargarMaterial.hpp"
#include "../include/Dvd.hpp"
#include "../include/Libro.hpp"
#include "../include/Revista.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

std::vector<Material *>
CargadorMateriales::cargarLibros(const std::string &ruta) {
  std::vector<Material *> libros;
  std::ifstream archivo(ruta);
  if (!archivo.is_open()) {
    std::cerr << "Error al abrir: " << ruta << std::endl;
    return libros;
  }

  std::string linea;
  while (std::getline(archivo, linea)) {
    std::stringstream ss(linea);
    std::string isbn, titulo, autor, genero, paginasStr;

    std::getline(ss, isbn, '-');
    std::getline(ss, titulo, '-');
    std::getline(ss, autor, '-');
    std::getline(ss, genero, '-');
    std::getline(ss, paginasStr);

    isbn = isbn.substr(0, isbn.find_last_not_of(" ") + 1);
    titulo = titulo.substr(titulo.find_first_not_of(" "));
    autor = autor.substr(autor.find_first_not_of(" "));
    genero = genero.substr(genero.find_first_not_of(" "));
    int paginas = std::stoi(paginasStr);

    libros.push_back(new Libro(titulo, genero, isbn, autor, paginas));
  }

  return libros;
}

std::vector<Material *>
CargadorMateriales::cargarDVDs(const std::string &ruta) {
  std::vector<Material *> dvds;
  std::ifstream archivo(ruta);
  if (!archivo.is_open()) {
    std::cerr << "Error al abrir: " << ruta << std::endl;
    return dvds;
  }

  std::string linea;
  while (std::getline(archivo, linea)) {
    std::stringstream ss(linea);
    std::string id, titulo, genero, director, duracionStr;

    std::getline(ss, id, '-');
    std::getline(ss, titulo, '-');
    std::getline(ss, genero, '-');
    std::getline(ss, director, '-');
    std::getline(ss, duracionStr);

    id = id.substr(0, id.find_last_not_of(" ") + 1);
    titulo = titulo.substr(titulo.find_first_not_of(" "));
    genero = genero.substr(genero.find_first_not_of(" "));
    director = director.substr(director.find_first_not_of(" "));
    std::string duracion =
        duracionStr.substr(duracionStr.find_first_not_of(" "));

    dvds.push_back(new Dvd(titulo, genero, id, director, duracion));
  }

  return dvds;
}

std::vector<Material *>
CargadorMateriales::cargarRevistas(const std::string &ruta) {
  std::vector<Material *> revistas;
  std::ifstream archivo(ruta);
  if (!archivo.is_open()) {
    std::cerr << "Error al abrir: " << ruta << std::endl;
    return revistas;
  }

  std::string linea;
  while (std::getline(archivo, linea)) {
    std::stringstream ss(linea);
    std::string id, nombre, tematica, edicion;

    std::getline(ss, id, '-');
    std::getline(ss, nombre, '-');
    std::getline(ss, tematica, '-');
    std::getline(ss, edicion);

    id = id.substr(0, id.find_last_not_of(" ") + 1);
    nombre = nombre.substr(nombre.find_first_not_of(" "));
    tematica = tematica.substr(tematica.find_first_not_of(" "));
    edicion = edicion.substr(edicion.find_first_not_of(" "));

    revistas.push_back(new Revista(nombre, tematica, edicion, id));
  }

  return revistas;
}
