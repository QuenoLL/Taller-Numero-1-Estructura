#include<iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "SystemImpl.hpp"
#include "Interface.hpp"

using namespace std;

void lecturaArch(Interface* sistema){
    ifstream arch("../txts/Pacientes Marmajaa.txt");

    if(!arch.is_open()){
        cout << "ERROR. Archivo no se pudo abrir." << "\n";
        return;
    }

    string linea;

    while(getline(arch, linea)){//Leo el archivo a travez de un lector linea por linea, que es "linea";
        stringstream ss(linea);
        string token;
        vector<string> partes;

        while(getline(ss,token,';')){
            partes.push_back(token);
        }

        sistema->crearPersonas(partes);
    }

    
};


void menu(Interface* sistema){
    int resp = 0;
    cin.exceptions(ios::failbit);

    while(resp != 4){
        cout << "=== HOSPITAL MARMAJA ===" << "\n";
        cout << "1. Atender Pacientes" << "\n" << "2. Ver Departamento" << "\n" << "3. Revisar Hisotrial de Atencion" << "\n" << "4. Salir" << "\n";

        do{
            try{
                cout << "Seleccionar opcion: ";
                cin >> resp;
            }catch(...){
                cin.clear();                                          // limpia el estado de error de cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // descarta lo que quedó mal escrito en el buffer
                cout << "ERROR. Ingrese una respuesta valida" << "\n";
                resp = 0;
            }
        }while(resp < 1 || resp > 4);
    }
}

void ejecutar(Interface*  sistema){
    sistema->crearDepartamentos();
    lecturaArch(sistema);
    menu(sistema);
}

int main(){
    Interface* sistema = new SystemImpl();

    ejecutar(sistema);
    
    delete sistema;
    return 0;
}


