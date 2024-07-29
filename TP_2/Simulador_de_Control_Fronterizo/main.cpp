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

    // CREACION DE VALORES //
    int* auxReglas_2=new int[2];
    int* auxReglas_3=new int[2];
    int* auxReglas_4=new int[5];
    int* auxReglas_Final=new int[5];
    int* auxSolicitudes=new int[4];
    int Puntuacion=0;
    int Decision;
    int Multa=0;
    Jugador jugador(nombreJugador);

    // CREACION DE OBJETOS NIVELES //

    Nivel1 nivelInicial;
    string* reglasNivel1 = new string [6];
    reglasNivel1=nivelInicial.getReglas();
    //NIVEL2
    Nivel2 nivel2;
    string* reglasNivel2 = new string [8];
    reglasNivel2=nivel2.getReglas(auxReglas_2);
    //NIVEL3
    Nivel3 nivel3;
    string* reglasNivel3 = new string [8];
    reglasNivel3=nivel3.getReglas(auxReglas_3);
    //NIVEL4
    Nivel4 nivel4;
    string* reglasNivel4 = new string [14];
    reglasNivel4=nivel4.getReglas(auxReglas_4);
    //NIVEL FINAL
    NivelFinal nivelFinal;
    string* reglasNivelFinal = new string [14];
    reglasNivelFinal=nivelFinal.getReglas(auxReglas_Final);

    cout<<endl;
    cout<<"Para una mejor experiencia se recomienda utilizar la consola externa en pantalla completa";
    cout<<endl;

    for(int i=0;i<6;i++){
        cout<<reglasNivel1[i]<<endl;
    }
    delete [] reglasNivel1;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    int auxTipoPersona=0;
    do {

        cout<<"Su puntuacion es: "<<Puntuacion<<endl;
        cout<<"Cantidad de multas: "<<Multa<<endl;
        string Solicitudes[30];


       nivelInicial.getSolicitudes(Solicitudes, auxTipoPersona);
       for(int i=0; i<30;i++){
           cout<<Solicitudes[i]<<endl;
        }

        cout<<endl;
        cout<<endl;
       Decision=jugador.tomarDecision();
       while ((Decision!=1) and (Decision!=2)  ) {
           cout<<"Ingrese una opcion correcta.\n";
           Decision=jugador.tomarDecision();
       }
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

        }else if(Decision==2){
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
    while ((Puntuacion >=0) && (Puntuacion<50) && (Multa < 4)) ;
    if((Puntuacion<0) || (Multa >= 4)){
        cout<<"Juego terminado.\n";
        cout<<"Puntuacion: "<<Puntuacion<<endl;
        cout<<"Cantidad de Multas recibidas: "<<Multa<<endl;
    }

    for(int i=0;i<8;i++){
        cout<<reglasNivel2[i]<<endl;
    }
    delete [] reglasNivel2;
    cout<<endl;

    do {

        cout<<"Su puntuacion es: "<<Puntuacion<<endl;
        cout<<"Cantidad de multas: "<<Multa<<endl;
        string Solicitudes[30];


       nivel2.getSolicitudes(Solicitudes, auxTipoPersona, auxSolicitudes);
       for(int i=0; i<30;i++){
            cout<<Solicitudes[i]<<endl;
        }

        cout<<endl;
        cout<<endl;



        Decision=jugador.tomarDecision();
        while ((Decision!=1) and (Decision!=2)  ) {
            cout<<"Ingrese una opcion correcta.\n";
            Decision=jugador.tomarDecision();
        }
        if(Decision==1){
            switch(auxTipoPersona){
            case 1:
                if(nivel2.verificarParametros(auxReglas_2,auxSolicitudes))
                    Puntuacion+=10;
                else
                    Puntuacion-=15;
                break;
            case 2:
                if(nivel2.verificarParametros(auxReglas_2,auxSolicitudes))
                    Puntuacion+=15;
                else
                    Puntuacion-=25;
                break;
            case 3:
                if(nivel2.verificarParametros(auxReglas_2,auxSolicitudes))
                    Puntuacion+=25;
                else{
                    Puntuacion-=25;
                    Multa++;
                }
                break;
            case 4:
                Puntuacion-=25;
                Multa++;
                break;
            }

        }else if(Decision==2){
            switch(auxTipoPersona){
            case 1:
                if(nivel2.verificarParametros(auxReglas_2,auxSolicitudes))
                Puntuacion-=15;
                break;
            case 2:
                if(nivel2.verificarParametros(auxReglas_2,auxSolicitudes))
                Puntuacion-=25;
                break;
            case 3:
                if(nivel2.verificarParametros(auxReglas_2,auxSolicitudes)){
                Puntuacion-=25;
                Multa++;
                }
                break;
            case 4:
                Puntuacion-=0;
                break;
            }
        }
    }
    while ((Puntuacion >=50) && (Puntuacion<100) && (Multa < 4)) ;
    if((Puntuacion<50) || (Multa >= 4)){
        cout<<"Juego terminado.\n";
        cout<<"Puntuacion: "<<Puntuacion<<endl;
        cout<<"Cantidad de Multas recibidas: "<<Multa<<endl;
    }

    for(int i=0;i<8;i++){
        cout<<reglasNivel3[i]<<endl;
    }
    delete [] reglasNivel3;
    cout<<endl;

    do {

        cout<<"Su puntuacion es: "<<Puntuacion<<endl;
        cout<<"Cantidad de multas: "<<Multa<<endl;
        string Solicitudes[30];


       nivel3.getSolicitudes(Solicitudes, auxTipoPersona, auxSolicitudes);
       for(int i=0; i<30;i++){
            cout<<Solicitudes[i]<<endl;
        }

        cout<<endl;
        cout<<endl;



        Decision=jugador.tomarDecision();
        while ((Decision!=1) and (Decision!=2)  ) {
            cout<<"Ingrese una opcion correcta.\n";
            Decision=jugador.tomarDecision();
        }
        if(Decision==1){
            switch(auxTipoPersona){
            case 1:
                if(nivel3.verificarParametros(auxReglas_3,auxSolicitudes))
                    Puntuacion+=10;
                else
                    Puntuacion-=15;
                break;
            case 2:
                if(nivel3.verificarParametros(auxReglas_3,auxSolicitudes))
                    Puntuacion+=15;
                else
                    Puntuacion-=25;
                break;
            case 3:
                if(nivel3.verificarParametros(auxReglas_3,auxSolicitudes))
                    Puntuacion+=25;
                else{
                    Puntuacion-=25;
                    Multa++;
                }
                break;
            case 4:
                Puntuacion-=25;
                Multa++;
                break;
            }

        }else if(Decision==2){
            switch(auxTipoPersona){
            case 1:
                if(nivel3.verificarParametros(auxReglas_3,auxSolicitudes))
                    Puntuacion-=15;
                break;
            case 2:
                if(nivel3.verificarParametros(auxReglas_3,auxSolicitudes))
                    Puntuacion-=25;
                break;
            case 3:
                if(nivel3.verificarParametros(auxReglas_3,auxSolicitudes)){
                    Puntuacion-=25;
                    Multa++;
                }
                break;
            case 4:
                Puntuacion-=0;
                break;
            }
        }
    }
    while ((Puntuacion >=100) && (Puntuacion<150) && (Multa < 4)) ;
    if((Puntuacion<100) || (Multa >= 4)){
        cout<<"Juego terminado.\n";
        cout<<"Puntuacion: "<<Puntuacion<<endl;
        cout<<"Cantidad de Multas recibidas: "<<Multa<<endl;
    }

    for(int i=0;i<14;i++){
        cout<<reglasNivel4[i]<<endl;
    }
    delete [] reglasNivel4;
    cout<<endl;

    do {

        cout<<"Su puntuacion es: "<<Puntuacion<<endl;
        cout<<"Cantidad de multas: "<<Multa<<endl;
        string Solicitudes[30];


       nivel4.getSolicitudes(Solicitudes, auxTipoPersona, auxSolicitudes);
       for(int i=0; i<30;i++){
            cout<<Solicitudes[i]<<endl;
        }

        cout<<endl;
        cout<<endl;



        Decision=jugador.tomarDecision();
        while ((Decision!=1) and (Decision!=2)  ) {
            cout<<"Ingrese una opcion correcta.\n";
            Decision=jugador.tomarDecision();
        }
        if(Decision==1){
            switch(auxTipoPersona){
            case 1:
                if(nivel4.verificarParametros(auxReglas_4,auxSolicitudes))
                    Puntuacion+=10;
                else
                    Puntuacion-=15;
                break;
            case 2:
                if(nivel4.verificarParametros(auxReglas_4,auxSolicitudes))
                    Puntuacion+=15;
                else
                    Puntuacion-=25;
                break;
            case 3:
                if(nivel4.verificarParametros(auxReglas_4,auxSolicitudes))
                    Puntuacion+=25;
                else{
                    Puntuacion-=25;
                    Multa++;
                }
                break;
            case 4:
                Puntuacion-=25;
                Multa++;
                break;
            }

        }else if(Decision==2){
            switch(auxTipoPersona){
            case 1:
                if(nivel4.verificarParametros(auxReglas_4,auxSolicitudes))
                    Puntuacion-=15;
                break;
            case 2:
                if(nivel4.verificarParametros(auxReglas_4,auxSolicitudes))
                    Puntuacion-=25;
                break;
            case 3:
                if(nivel4.verificarParametros(auxReglas_4,auxSolicitudes)){
                    Puntuacion-=25;
                    Multa++;
                }
                break;
            case 4:
                Puntuacion-=0;
                break;
            }
        }
    }
    while ((Puntuacion >=150) && (Puntuacion<200) && (Multa < 4)) ;
    if((Puntuacion<150) || (Multa >= 4)){
        cout<<"Juego terminado.\n";
        cout<<"Puntuacion: "<<Puntuacion<<endl;
        cout<<"Cantidad de Multas recibidas: "<<Multa<<endl;
    }

    for(int i=0;i<14;i++){
        cout<<reglasNivelFinal[i]<<endl;
    }
    delete [] reglasNivelFinal;
    cout<<endl;

    do {

        cout<<"Su puntuacion es: "<<Puntuacion<<endl;
        cout<<"Cantidad de multas: "<<Multa<<endl;
        string Solicitudes[30];


       nivelFinal.getSolicitudes(Solicitudes, auxTipoPersona, auxSolicitudes);
       for(int i=0; i<30;i++){
            cout<<Solicitudes[i]<<endl;
        }

        cout<<endl;
        cout<<endl;



        Decision=jugador.tomarDecision();
        while ((Decision!=1) and (Decision!=2)  ) {
            cout<<"Ingrese una opcion correcta.\n";
            Decision=jugador.tomarDecision();
        }
        if(Decision==1){
            switch(auxTipoPersona){
            case 1:
                if(nivelFinal.verificarParametros(auxReglas_Final,auxSolicitudes))
                    Puntuacion+=10;
                else
                    Puntuacion-=15;
                break;
            case 2:
                if(nivelFinal.verificarParametros(auxReglas_Final,auxSolicitudes))
                    Puntuacion+=15;
                else
                    Puntuacion-=25;
                break;
            case 3:
                if(nivelFinal.verificarParametros(auxReglas_Final,auxSolicitudes))
                    Puntuacion+=25;
                else{
                    Puntuacion-=25;
                    Multa++;
                }
                break;
            case 4:
                Puntuacion-=25;
                Multa++;
                break;
            }

        }else if(Decision==2){
            switch(auxTipoPersona){
            case 1:
                if(nivelFinal.verificarParametros(auxReglas_Final,auxSolicitudes))
                    Puntuacion-=15;
                break;
            case 2:
                if(nivelFinal.verificarParametros(auxReglas_Final,auxSolicitudes))
                    Puntuacion-=25;
                break;
            case 3:
                if(nivelFinal.verificarParametros(auxReglas_Final,auxSolicitudes)){
                    Puntuacion-=25;
                    Multa++;
                }
                break;
            case 4:
                Puntuacion-=0;
                break;
            }
        }
    }
    while ((Puntuacion >=200) && (Puntuacion<250) && (Multa < 4)) ;
    if((Puntuacion<200) || (Multa >= 4)){
        cout<<"Juego terminado.\n";
        cout<<"Puntuacion: "<<Puntuacion<<endl;
        cout<<"Cantidad de Multas recibidas: "<<Multa<<endl;
    } else {
        cout<<"Felicidades "<<nombreJugador <<" GANASTE\n";
        cout<<"Puntuacion: "<<Puntuacion<<endl;
        cout<<"Cantidad de Multas recibidas: "<<Multa<<endl;
    }



    return 0;
}
