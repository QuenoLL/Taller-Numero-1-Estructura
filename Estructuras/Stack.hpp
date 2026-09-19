#pragma once 
#include "Nodo.hpp"
#include <string>

template< typename T>

class Stack{
    private:
        Nodo<T>* ultimo;
        int altura;
    public:
        Stack();
        bool empty();
        void push(T valor);
        void pop();
        Nodo<T>* top();
        void clear();
        int size();
        ~Stack(); 
        string mostrarInfo();
        
  
};
#include "Stack.cpp"