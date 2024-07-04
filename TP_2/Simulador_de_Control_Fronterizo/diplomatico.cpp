#include "diplomatico.h"

Diplomatico::Diplomatico()
{

}
std::string* Diplomatico ::getID(){
    std::ifstream formatoID;
    std::string* ID = new std::string [9];
    formatoID.open("Nivel1/ID.txt");
    if(formatoID.fail()){
        std::cout<<" Error al intentar abrir archivo ID \n";
    }
    for(int i=0; i<9; i++){
        std::getline(formatoID,ID[i]);
    }
    return ID;
}

std::string* Diplomatico ::getPasaporte(){
    std::ifstream formatoPasaporte;
    std::string* Pasaporte = new std::string [15];
    formatoPasaporte.open("Nivel1/Pasaporte.txt");
    if(formatoPasaporte.fail()){
        std::cout<<" Error al intentar abrir archivo Pasaporte \n";
    }
    for(int i=0; i<15; i++){
        std::getline(formatoPasaporte,Pasaporte[i]);
    }
    return Pasaporte;
}
std::string* Diplomatico ::getDeclaracion(){
    std::ifstream formatoDeclaracion;
    std::string* Declaracion = new std::string [6];
    formatoDeclaracion.open("Nivel1/Pasaporte.txt");
    if(formatoDeclaracion.fail()){
        std::cout<<" Error al intentar abrir archivo Declaracion \n";
    }
    for(int i=0; i<6; i++){
        std::getline(formatoDeclaracion,Declaracion[i]);
    }
    return Declaracion;
}
