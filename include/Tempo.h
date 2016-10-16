#ifndef TEMPO_H
#define TEMPO_H


#include "Serie.h"
#include <iostream>

using namespace std;

class Tempo : public Serie {
public:
    /**
     * O nome da serie deve ser sempre "Tempo". O tamanhoDaFaixa
     * define o tamanho da faixa de tempo. Se o tamanhoDaFaixa for
     * 3, por exemplo, o tamanho m�ximo da Serie sera 3 e,
     * portanto, s� os 3 �ltimos valores ser�o guardados.
     */
    Tempo(int tamanhoDaFaixa);
    virtual ~Tempo();
    /**
     * Coloca o pr�ximo valor de tempo nesta Serie.
     */
    virtual void incrementar();
    virtual bool estaVazia() ;
    virtual int getTamanho() ;
    virtual double getValor(int posicao);
    virtual double getMaximo() ;
    virtual double getMinimo() ;

private:
    int tamanhoDaFaixa;
    double* valores;

};

#endif // TEMPO_H
