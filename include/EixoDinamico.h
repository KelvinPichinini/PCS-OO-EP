#ifndef EIXODINAMICO_H
#define EIXODINAMICO_H


#include "Eixo.h"
#include "Serie.h"
#include <iostream>

#define LARGURA_UTIL 61
#define ALTURA_UTIL 16

#define DIVISAO_ABSCISSA 10
#define DIVISAO_ORDENADA 5

using namespace std;

class EixoDinamico : public Eixo {
public:
    /**
     * O titulo do eixo deve ser o nome da serie.
     */
    EixoDinamico(Serie* serie, string unidade, int numeroDeDivisoes,
                 double escalaMinimaInicial, double escalaMaximaInicial);
    virtual ~EixoDinamico();
    virtual double getEscalaMinima();
    virtual double getEscalaMaxima();

    protected:
        Serie* serieNoEixo;

    private:
};

#endif // EIXODINAMICO_H
