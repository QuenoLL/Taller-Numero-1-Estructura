#pragma once 
#include "Nodo.hpp"
#include <string>

using namespace std;
template< typename T>

class Stack{
    private:
        Nodo<T>* ultimo;
        int altura;

    public: 
        Stack(){
            this -> ultimo = nullptr;
            this -> altura = 0;
        }

    public:
        //Constructor copia
        Stack(const Stack<T> & otro){
            this -> ultimo = nullptr;
            this -> altura = 0;

            Nodo<T>* origen = otro.ultimo;
            Nodo<T>* cola = nullptr;

            while(origen != nullptr){
                Nodo<T>* nuevo = new Nodo<T>(origen -> getValor());
                if(cola == nullptr){
                    this -> ultimo = nuevo;
                }else{
                    cola -> setSiguiente(nuevo);
                }
                cola = nuevo;
                origen = origen -> getSiguiente();
                this -> altura++;
            }
        }

        bool empty(){
            return this-> ultimo == nullptr;
        }

        void push(T valor){
            Nodo<T>* nuevo = new Nodo<T>(valor);
            nuevo -> setSiguiente(this -> ultimo);
            this -> ultimo = nuevo;
            this -> altura++;
        }

        void pop(){
            if(this -> ultimo ==nullptr){
                return;
            }
            Nodo<T>* eliminar = this -> ultimo;
            this -> ultimo = eliminar -> getSiguiente();
            delete eliminar;
            this -> altura++;
        }

        Nodo<T>* top(){
            if(this -> ultimo == nullptr){
                return nullptr;
            }
            return this -> ultimo;
        }

        void clear(){
            while (this -> ultimo != nullptr){
                Nodo<T>* eliminar = this -> ultimo;
                this -> ultimo = eliminar -> getSiguiente();
                delete eliminar;
            }
            this -> altura--;
        }

        int size(){
            return this -> altura;
        }

        ~Stack(){
            this -> clear();
        }
};