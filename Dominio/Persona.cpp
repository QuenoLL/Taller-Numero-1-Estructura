#include<iostream>
#include "Persona.hpp"

using namespace std;

/**
 * Retorna una instancia de la clase @Persona.hpp
 */
Persona::Persona(int posAtencion, string name, int edad, string departamento){
    this->posAtencion = posAtencion;
    this->name = name;
    this->edad = edad;
    this->departamento = departamento;
}

int Persona::getAtencion(){
    return this->posAtencion;
}

int Persona::getEdad(){
    return this->edad;
}

string Persona::getName(){
    return this->name;
}

string Persona::getDepartamento(){
    return this->departamento;
}

