#include "nivel2.h"

Nivel2::Nivel2()
{

}

std::string* Nivel2::getReglas(){
    std::ifstream reglasNivel, reglas;
    std::string* carpetaReglas = new std::string [8];

    reglas.open("Nivel2/reglas.txt");
    if(reglas.fail()){
        std::cout<<"error al intentar abrir las reglas del nivel 2\n";
    }
    reglasNivel.open("Nivel2/reglasNivl2.txt");
    if(reglasNivel.fail()){
        std::cout<<"error al intentar abrir las reglas del nivel 2\n";
    }

    for(int i=0; i<8; i++){
        std::getline(reglas,carpetaReglas[i]);
        std::string aux;
        std::getline(reglasNivel,aux);
        carpetaReglas[i] += ' ';
        carpetaReglas[i]+=aux;
    }
    return carpetaReglas;
}
