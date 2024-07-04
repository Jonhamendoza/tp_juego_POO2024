#include "nivel3.h"

Nivel3::Nivel3()
{

}
std::string* Nivel3::getReglas(){
    std::ifstream reglasNivel, reglas;
    std::string* carpetaReglas = new std::string [9];

    reglas.open("Nivel3/reglas.txt");
    if(reglas.fail()){
        std::cout<<"error al intentar abrir las reglas del nivel 3\n";
    }
    reglasNivel.open("Nivel3/reglasNivl3.txt");
    if(reglasNivel.fail()){
        std::cout<<"error al intentar abrir las reglas del nivel 3\n";
    }

    for(int i=0; i<9; i++){
        std::getline(reglas,carpetaReglas[i]);
        std::string aux;
        std::getline(reglasNivel,aux);
        carpetaReglas[i]+= ' ';
        carpetaReglas[i]+=aux;
    }
    return carpetaReglas;
}
