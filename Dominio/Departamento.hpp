#pragma once
#include "ObjetoNodo.hpp"
#include <string>
using namespace std;

class Departamento : public ObjetoNodo{

    private:
        string name;
    public:
        Departamento(string name);
        
        ~Departamento();


};