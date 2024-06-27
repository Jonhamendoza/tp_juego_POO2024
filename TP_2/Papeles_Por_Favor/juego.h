#ifndef JUEGO_H
#define JUEGO_H


class Juego
{
public:
    Juego();
    int nivelActual;
    int puntuacion;
    int multa;
    void iniciarNivel();
    void evaluarDecision(bool decisionCorrecta);
    void siguienteNivel();
    int getNivelActual();
    int getPuntuacion();
    int getMulta();
};

#endif // JUEGO_H
