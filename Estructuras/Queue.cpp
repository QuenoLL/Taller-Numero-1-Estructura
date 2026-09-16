#include "Queue.hpp"
#include "Nodo.hpp"

template <typename T>

Queue<T>::Queue() {
    this -> primero = nullptr;
    this -> tamaño = 0;
}

template <typename T>

bool Queue<T>::empty(){
    if (this -> tamaño==0){
        return true;
    }
    return false;
}
template <typename T>

void Queue<T>::push(T valor){
    Nodo<T>* nuevo = new Nodo<T>(valor);

    if(this -> primero == nullptr){
        this -> primero = nuevo;
    }
    else{

        Nodo<T>* puntero = this -> primero;
    
        while (puntero->getSiguiente() != nullptr){
            puntero = puntero -> getSiguiente();
        }
    puntero->setSiguiente(nuevo);
    }
    this-> tamaño ++;
    
}   
template <typename T>

void Queue<T>::pop(){

    if(this -> primero == nullptr){
        return;
    }
    Nodo<T>* primero = this -> primero;
    Nodo<T>* nuevo = primero -> getSiguiente();
    delete primero;
    this -> primero = nuevo;
    this -> tamaño --;
}

template <typename T>

Nodo<T>* Queue<T>:: front(){
    if(this -> primero == nullptr){
        return nullptr;
    }
    return this -> primero; 
}

template <typename T>

void Queue<T>::clear(){
    while(this->primero != nullptr){
        Nodo<T>* temp = this -> primero -> getSiguiente();
        delete this -> primero;
        this-> primero = temp;
    }
    this -> tamaño = 0;
}

template <typename T>

int Queue<T>::size(){
    return this -> tamaño;
}

