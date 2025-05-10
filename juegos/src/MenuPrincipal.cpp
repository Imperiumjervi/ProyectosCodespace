#include "../include/MenuPrincipal.hpp"
#include <iostream>
#include "Ahorcado.hpp"
#include "Parejas.hpp"
#include "GestorArchivo.hpp"
#include "Juego.hpp"


MenuPrincipal::MenuPrincipal() = default;

void MenuPrincipal::mostrarMenu() {
    std::cout << "Bienvenido";
    std::cout << "\nSeleccione el juego que desea jugar:\n";
    std::cout << "1. Ahorcado\n";
    std::cout << "2. Parejas\n";
    std::cout << "3. Salir\n";
    std::cout << "Ingrese su opción: ";

    int opcion = 0;
    std::cin >> opcion;
    ejecutarJuego(opcion);
    if (opcion == 3) {
        std::cout << "Saliendo del juego...\n";
        return;
    }
    std::cout << "Opción inválida. Por favor, intente de nuevo.\n";
    mostrarMenu();
}

void MenuPrincipal::ejecutarJuego(int opcion) {

    switch (opcion) {

        case 1: {
            // Código para ejecutar el juego Ahorcado
            Ahorcado ahorcado;
            ahorcado.jugar();
            break;
        }
        case 2: {
            // Código para ejecutar el juego Parejas
            Parejas parejas;
            parejas.jugar();
            break;
        }
        default:
            std::cout << "Opción inválida";
            break;
    }
}
