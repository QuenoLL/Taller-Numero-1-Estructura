#pragma once
#include "Interface.hpp"

class SystemImpl: public Interface{

    public:
        SystemImpl();
        
        void crearPersonas(vector<string> partes);
        void crearDepartamentos();

        ~SystemImpl();

};