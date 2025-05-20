#include "../include/Solution.hpp"

Estudiante::Estudiante(){}

Estudiante::Estudiante(std::string codigo, std::string nombre, float notas[3], float adicional) {
  this -> codigo = codigo;
  this -> nombre = nombre;
  for(int i = 0; i < 3; i++){
    this->notas[i] = notas[i];
  }
  this ->adicional = adicional;
}


void Estudiante::setCodigo(std::string codigo){
  this->codigo;
}

std::string Estudiante::getCodigo(){
  return codigo;
}

void Estudiante::setNombre(std::string nombre){
  this->nombre=nombre;
}

std::string Estudiante::getNombre(){
  return nombre;
}

void Estudiante::setAdicional(float adicional){
  this->adicional=adicional;
}

float Estudiante::getAdicional(){
  return adicional;
}

void Estudiante::setNotas(float notas[3]){
  this->notas[3] = notas[3];
 }

float Estudiante::calcularPromedio(){
  float nota = 0.0;
  for (int i = 0; i < 3; i++)
  {
    notas[i] += nota;
  }
  
  return nota/3;
}