#include "Nodo.hpp"
#include "Stack.hpp"

template <typename T>

Stack<T>::Stack() {
    this -> ultimo = nullptr;
    this -> altura = 0;
}

template <typename T>

bool Stack <T>:: empty(){
    return this -> ultimo == nullptr;
}

template <typename T>

void Stack <T>::push(T valor){
    Nodo<T>* nuevo = new Nodo<T>(valor);

    if(this -> ultimo == nullptr){//Control de error
        this -> ultimo = nuevo;
    }
    else{
        nuevo->setSiguiente(this->ultimo);
        this->ultimo = nuevo;
    }

    this-> altura++;

}

template <typename T>

void Stack<T>:: pop(){

    if(this -> ultimo == nullptr){//Control de error
        return;
    }
    else{
        Nodo<T>* eliminar = this->ultimo;
        this->ultimo = eliminar->getSiguiente();
        delete eliminar;
    }

    this->altura--;
}

template <typename T>

Nodo<T>* Stack<T>::top(){
    if(this -> ultimo == nullptr){
        return nullptr;
    }
    return this -> ultimo; 
}

template <typename T>

void Stack<T>::clear(){

    if(this->ultimo == nullptr){
        return;
    }else{
        while(this->ultimo != nullptr){
            Nodo<T>* eliminar = this->ultimo;
            this->ultimo = eliminar->getSiguiente();
            delete eliminar;

        }
    }
    this->altura = 0;
    
}

template <typename T>

int Stack<T>:: size(){
    return this -> altura;
}

