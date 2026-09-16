#pragma once 
#include "Nodo.hpp"
#include <string>

template<typename T>

class Queue{
    private:
        Nodo<T>* primero;
        int tamaño;
    public:
        Queue();
        bool empty();
        void push(T valor);
        void pop();
        Nodo<T>* front();
        void clear();
        int size();
        ~Queue(); 
        string mostrarInfo();
        
  
};
#include "Queue.cpp"