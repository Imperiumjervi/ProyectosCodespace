#include "../include/Material.hpp"

Material::Material(std::string titulo, std::string genero)
    : titulo(titulo), genero(genero), disponible(true) {}

Material::~Material() {}

void Material::registrarPrestamo() { disponible = false; }
void Material::registrarDevolucion() { disponible = true; }

void Material::setTitulo(std::string titulo) { this->titulo = titulo; }
void Material::setGenero(std::string genero) { this->genero = genero; }
void Material::setDisponible(bool disponible) { this->disponible = disponible; }
std::string Material::getTitulo() { return titulo; }
std::string Material::getGenero() { return genero; }
bool Material::getDisponible() { return disponible; }
