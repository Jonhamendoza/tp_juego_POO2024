#include "nivelfinal.h"

NivelFinal::NivelFinal()
{

}
std::string* NivelFinal::getReglas(){
    std::ifstream reglasNivel, reglas;
    std::string* carpetaReglas = new std::string [13];

    reglas.open("NivelFinal/reglas.txt");
    if(reglas.fail()){
        std::cout<<"error al intentar abrir las reglas del nivel 4\n";
    }
    reglasNivel.open("NivelFinal/reglasNivlFinal.txt");
    if(reglasNivel.fail()){
        std::cout<<"error al intentar abrir las reglas del nivel 4\n";
    }

    for(int i=0; i<13; i++){
        std::getline(reglas,carpetaReglas[i]);
        std::string aux;
        std::getline(reglasNivel,aux);
        carpetaReglas[i]+= ' ';
        carpetaReglas[i]+=aux;
    }
    return carpetaReglas;
}
