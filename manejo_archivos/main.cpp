#include "include/Solution.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ifstream archivo("notas.txt");
  string registro;

  while(getline(archivo, registro)){
    cout <<registro<<endl;
  }

  archivo.close();
  return 0;
}
