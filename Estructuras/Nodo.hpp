#pragma once

template <class T>
class Nodo{
    private:
    T valor;
    Nodo<T>* siguiente;

    public:
    Nodo(T val){
        this -> valor = val;
        this -> siguiente = nullptr;
    }
    //Gets
    T getValor(){
        return this -> valor;
    }
    Nodo<T>* getSiguiente(){
        return this -> siguiente;
    }
    //Sets
    void setValor(T val){
        this -> value = val;
    }
    void setSiguiente(Nodo<T> sig){
        this -> siguiente = sig;
    }
    //Destructor
    ~Nodo(){
    }

};
