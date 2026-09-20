#include <iostream>
#include "Lista.hpp"

template <class T>
Lista<T>::Lista(){
    this->head = nullptr;
    this->tamaño = 0;
}

template <class T>
void Lista<T>::agregar(T valor){
    Nodo<T>* nuevo = new Nodo<T>(valor);
    
    if(this->head == nullptr){
        this->head = nuevo;
    }else{
        Nodo<T>* cursor = this->head;

        while(cursor->getSiguiente() != nullptr){
            cursor = cursor->getSiguiente();
        }
        cursor->setSiguiente(nuevo);
    }
    this->tamaño++;
}

template <class T>
Lista<T>::~Lista(){
     Nodo<T>* cursor = this->head;
        while (cursor != nullptr) {
            Nodo<T>* siguiente = cursor->getSiguiente();
            delete cursor;
            cursor = siguiente;
        }
}




