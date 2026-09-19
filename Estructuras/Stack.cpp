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

}

template <typename T>

void Stack<T>:: pop(){

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
    
}

template <typename T>

int Stack<T>:: size(){
    return this -> altura;
}

