#pragma once
#include "Interface.hpp"

class SystemImpl: public Interface{

    private:

    public:
        SystemImpl();
        
        void crearPersonas(vector<string> partes);
        void crearDepartamentos(vector<string> partes);

        ~SystemImpl();

};