#pragma once
#include <string>
#include "../Estructuras/Lista.hpp"
#include "Persona.hpp"

using namespace std;

class Departamento{

    private:
        string name;
        Lista<Persona>* listaPacientes;

    public:
        Departamento(string name);
        string getName();
        Lista<Persona>* getListaPacientes();

        ~Departamento();
};