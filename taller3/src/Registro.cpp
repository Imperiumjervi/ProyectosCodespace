#include "../include/Registro.hpp"
#include <fstream>
#include <iostream>
#include <string>

Registro::Registro() {
  archivoPrestamos = "prestamos.txt";
  archivoDevoluciones = "devoluciones.txt";
}

void Registro::guardarOperacion(std::string archivo, std::string operacion,
                                Material *material, Persona *persona,
                                Asistente *asistente) {
  std::ofstream out(archivo, std::ios::app);
  if (out.is_open()) {
    out << "Operacion: " << operacion << "\n"
        << "Material: " << material->getTitulo() << "\n"
        << "Persona: " << persona->getNombre() << "\n"
        << "Asistente: " << asistente->getNombre() << "\n"
        << "------------------------\n";
    out.close();
  } else {
    std::cerr << "Error al abrir el archivo: " << archivo << std::endl;
  }
}
