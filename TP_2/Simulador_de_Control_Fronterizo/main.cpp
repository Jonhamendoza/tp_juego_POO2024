#include <iostream>
#include "jugador.h"
#include "nivel.h"
#include "nivel1.h"
#include "nivel2.h"
#include "nivel3.h"
#include "nivel4.h"
#include "nivelfinal.h"
//#include "aldeano.h"

using namespace std;

int main()
{
    std::string nombreJugador;
    cout<<"Bienvenido al juego. \n";
    cout<<"Ingrese su nombre: \n";
    getline(cin,nombreJugador);
    int Puntuacion=0;
    int Decision;
    int Multa=0;
    Jugador jugador(nombreJugador);
    Nivel1 nivelInicial;
    string* reglasNivel1 = new string [6];
    reglasNivel1=nivelInicial.getReglas();
    cout<<endl;
    cout<<endl;
    cout<<endl;

    for(int i=0;i<6;i++){
        cout<<reglasNivel1[i]<<endl;
    }
    delete [] reglasNivel1;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    int auxTipoPersona=1;
    do {
        string* Solicitudes = new string[30];

        Solicitudes=nivelInicial.getSolicitudes();

        for(int i=0; i<30;i++){
            cout<<Solicitudes[i]<<endl;
        }
        cout<<endl;
        cout<<endl;
        if(Solicitudes[22]=="Diplomatico"){
            auxTipoPersona=2;
        } else if(Solicitudes[22]=="Refugiado Politico"){
            auxTipoPersona=3;
        } else if(Solicitudes[22]=="Revolucionario"){
            auxTipoPersona=4;
        }

        delete [] Solicitudes;
        Decision=jugador.tomarDecision();
        if(Decision==1){
            switch(auxTipoPersona){
            case 1:
                Puntuacion+=10;
                break;
            case 2:
                Puntuacion+=15;
                break;
            case 3:
                Puntuacion+=25;
                break;
            case 4:
                Puntuacion-=25;
                Multa++;
                break;
            }

        }
        if(Decision==2){
            switch(auxTipoPersona){
            case 1:
                Puntuacion-=15;
                break;
            case 2:
                Puntuacion-=25;
                break;
            case 3:
                Puntuacion-=25;
                Multa++;
                break;
            case 4:
                Puntuacion-=0;
                break;
            }
        }
    }
    while ((Puntuacion<100) ) ;
    return 0;
}
