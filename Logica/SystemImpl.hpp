#pragma once
#include "Interface.hpp"
#include "../Estructuras/Lista.hpp"
#include "../Dominio/Departamento.hpp"

class SystemImpl: public Interface{

    private:
        Lista<Departamento*>* listaDepartamentos;

    public:
        SystemImpl();
        
        void crearPersonas(vector<string> partes);
        void crearDepartamentos();
        void asignarPacientes(Persona*);
        Lista<Departamento*>* getLista();

        ~SystemImpl();

};