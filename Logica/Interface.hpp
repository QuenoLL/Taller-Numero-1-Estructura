#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "../Dominio/Persona.hpp"

using namespace std;

class Interface{
    
    public:
        virtual void crearPersonas(vector<string> partes) = 0;
        virtual void crearDepartamentos() = 0;
        virtual void asignarPacientes(Persona* persona) = 0;
        virtual ~Interface(){};

};