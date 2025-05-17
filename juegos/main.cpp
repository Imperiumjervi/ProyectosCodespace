#include <iostream>
#include "Ahorcado.hpp"
#include "Parejas.hpp"

int main() {
    int opcion;
    do {
        std::cout << "=== MENU PRINCIPAL ===\n";
        std::cout << "1. Jugar Ahorcado\n";
        std::cout << "2. Jugar Parejas\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        if (opcion == 1) {
            std::string jugador;
            std::cout << "Ingrese su nombre: ";
            std::cin >> jugador;
            Ahorcado juego(jugador, 0, ""); // Puedes ajustar la fecha y puntuación inicial
            juego.iniciar();
        } else if (opcion == 2) {
            std::string jugador;
            std::cout << "Ingrese su nombre: ";
            std::cin >> jugador;
            Parejas juego(jugador, 0, "", 4, 4); // Puedes ajustar filas y columnas
            juego.iniciar();
        }
    } while (opcion != 0);

    std::cout << "Gracias por jugar.\n";
    return 0;
}