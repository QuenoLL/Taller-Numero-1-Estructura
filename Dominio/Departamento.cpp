#include <iostream>
#include "Departamento.hpp"

Lista<Persona>* Departamento::getListaPacientes() {
    return this->listaPacientes;
}

Departamento::Departamento(string name){
    this->name = name;
    this->listaPacientes = new Lista<Persona>();
}

Departamento::~Departamento(){
    delete this->listaPacientes;
}

