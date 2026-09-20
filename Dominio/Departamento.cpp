#include <iostream>
#include "Departamento.hpp"

template <typename T>
Stack<Persona> Departamento<T>::getFilaPacientes() {
    return this->filaPacientes;
}

