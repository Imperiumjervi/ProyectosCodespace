#include "include/Solution.hpp"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

vector<Estudiante> separarCadena(string texto);

int main() {

  // fstream archivo("notas.txt", ios::in); <-- Lee el archivo en modo lectura
  ifstream archivo("notas.txt");
  string registro;
  vector<string> registros;

  while (getline(archivo, registro)) {
    registros.push_back(registro);
  }
  separarCadena(registro);

  cout << "tamaño: " << registros.size() << endl;

  archivo.close();
  return 0;
}

vector<Estudiante> separarCadena(string texto) {
  char delimitador = '-';
  // string nombre;
  // float notas[3];
  // float adicional;
  // int contador = 0;
  string auxiliar = "";

  vector<string> contenido;

  for (int i = 0; 0 < texto.size(); i++) {
    if (i + 1 == texto.size()) {
      contenido.push_back(auxiliar);
      cout << auxiliar << endl;
      auxiliar = "";
    } else {
      if (texto[i] != delimitador) {
        auxiliar += texto[i];
      } else {
        contenido.push_back(auxiliar);
        cout << auxiliar << endl;
        auxiliar = "";
      }
    }
  }
  return contenido;
}
