#include "funciones.h"

Funciones::Funciones()
{

}
std::string* sumarArreglosString(std::string* &arreglo1, std::string* &arreglo2, int cantidad){
    std::string* arreglosSumados = new std::string[cantidad];
    for(int i=0; i<cantidad; i++){
        arreglosSumados[i]=arreglo1[i]+arreglo2[i];
    }
    return arreglosSumados;
}
