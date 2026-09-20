#pragma once
#include <string>
#include "Nodo.hpp"

template <class T>
class Lista{

    private:
        Nodo<T>* head;
        int tamaño;
    public:
        Lista();
        void agregar(T valor);
        ~Lista();
        

};
#include "Lista.cpp"