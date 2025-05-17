#include "../include/Material.hpp"

Material::Material(std::string titulo, std::string genero)
    : titulo(titulo), genero(genero), disponible(true) {}

Material::~Material() {}

void Material::registrarPrestamo() { disponible = false; }
void Material::registrarDevolucion() { disponible = true; }
