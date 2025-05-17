#include "../include/Usuario.hpp"
#include <locale>
#include <string>

Usuario::Usuario() {}

Usuario::Usuario(std::string nombre, int numero)
    : nombre(nombre), numero(numero) {}

void Usuario::setNombre(std::string nombre) { this->nombre = nombre; }
std::string Usuario::getNombre() { return nombre; }

void Usuario::setNumero(int numero) { this->numero = numero; }

int Usuario::getNumero() { return numero; }
