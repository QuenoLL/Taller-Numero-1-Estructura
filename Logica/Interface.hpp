#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Interface{
    
    public:
        virtual void crearPersonas(vector<string> partes) = 0;
        virtual void crearDepartamentos() = 0;
        virtual ~Interface(){};

};