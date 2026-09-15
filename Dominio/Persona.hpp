#pragma once
#include <string>

using namespace std;

class Persona{

    private:
        int posAtencion;
        string name;
        int edad;
        string departamento;

    public:
        Persona(int posAtencion, string name, int edad, string departamento);
        int getAtencion();
        string getName();
        int getEdad();
        string getDepartamento();

        ~Persona();

};