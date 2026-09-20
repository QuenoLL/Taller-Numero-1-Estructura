#include<iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(){

    lecturaArch();
    


    return 0;
}


void lecturaArch(){
    ifstream arch("txts/Pacientes Marmajaa.txt");

    if(!arch.is_open()){
        cout << "ERROR. Archivo no se pudo abrir." << "\n";
        return;
    }

    string linea;

    while(getline(arch, linea)){//Leo el archivo a travez de un lector linea por linea, que es "linea";

    }
};