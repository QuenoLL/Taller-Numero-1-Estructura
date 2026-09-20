#pragma once
#include <string>
#include "Stack.hpp"
#include "Persona.hpp"

using namespace std;
template <typename T>

class Departamento{

    private:
        string name;
        Stack<Persona> filaPacientes;

    public:
        Departamento(string name);
        Stack<Persona> getFilaPacientes();

        ~Departamento();


};