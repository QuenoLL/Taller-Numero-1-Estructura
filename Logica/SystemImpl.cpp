#include <iostream>
#include <vector>
#include <string>
#include "SystemImpl.hpp"
#include "../Dominio/Persona.hpp"

SystemImpl::SystemImpl(){
    this->listaDepartamentos = new Lista<Departamento*>();
}

void SystemImpl::crearPersonas(vector<string> partes){
    int posAtencion = stoi(partes[0]);
    string nombre = partes[1];
    int edad = stoi(partes[2]);
    string departamento = partes[3];

    Persona* p = new Persona(posAtencion,nombre,edad,departamento);

}

void SystemImpl::crearDepartamentos(){
    vector<string> deptos = {"Urgencias", "Medicina General", "Cardiologia", "Neurologia", "Traumatologia", "Cirugia", "Pediatria", "Hospitalizacion"};

    for(string nombre : deptos){
        Departamento* dep = new Departamento(nombre);
        this->listaDepartamentos->agregar(dep);
    }
    
}

void SystemImpl::asignarPacientes(Persona* persona){

}


Lista<Departamento*>* SystemImpl::getLista(){
    return this->listaDepartamentos;
}

SystemImpl::~SystemImpl(){
    delete this->listaDepartamentos;;
}



