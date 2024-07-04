#include "nivel4.h"

Nivel4::Nivel4()
{

}
std::string* Nivel4::getReglas(){
    std::ifstream reglasNivel, reglas;
    std::string* carpetaReglas = new std::string [13];

    reglas.open("Nivel4/reglas.txt");
    if(reglas.fail()){
        std::cout<<"error al intentar abrir las reglas del nivel 4\n";
    }
    reglasNivel.open("Nivel4/reglasNivl4.txt");
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
