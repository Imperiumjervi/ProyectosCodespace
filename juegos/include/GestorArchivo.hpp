#pragma once
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <fstream>

class GestorArchivo {
public:
    std::string rutaArchivo;
    explicit GestorArchivo(std::string  rutaArchivo);
    static void guardarPartida(const std::string& datos);
    static void cargarPartida();
    static void eliminarPartida();
    static void listarPartidas();
};