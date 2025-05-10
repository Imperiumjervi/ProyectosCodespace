#include "../include/MenuPrincipal.hpp"
#include "../include/Ahorcado.hpp"
#include "../include/Parejas.hpp"
#include <iostream>
#include <string>

MenuPrincipal::MenuPrincipal() {}

void MenuPrincipal::mostrarMenu() {
    std::cout << "Bienvenido";
    std::cout << "Seleccione el juego que desea jugar:" << std::endl;
    std::cout << "1. Ahorcado" << std::endl;
    std::cout << "2. Parejas" << std::endl;
    std::cout << "3. Salir" << std::endl;   
    std::cout << "Ingrese su opción: ";
    int opcion;
    std::cin >> opcion;
    while (opcion < 1 || opcion > 3) {
        std::cout << "Opción inválida. Intente nuevamente: ";
        std::cin >> opcion;
    }
    if (opcion == 3) {
        std::cout << "Saliendo del juego..." << std::endl;
        return;
    }
    std::cout << "Usted ha seleccionado la opción " << opcion << std::endl;
    std::cout << "Iniciando el juego..." << std::endl;
    ejecutarJuego(opcion);

}

void MenuPrincipal::ejecutarJuego(int opcion) {
    switch (opcion) {
        case 1: {
            // Ejecutar juego Ahorcado
            // Crear un objeto de la clase Ahorcado
            Ahorcado ahorcado;
            ahorcado.iniciar();
            break;
        }
        case 2: {
            // Ejecutar juego Parejas
            Parejas parejas;
            parejas.iniciar();
            break;
        }
        default:
            std::cout << "Opción inválida";
            break;
    }
}
