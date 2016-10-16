#include "EixoDinamico.h"

EixoDinamico::EixoDinamico(Serie* serie, string unidade, int numeroDeDivisoes,
                           double escalaMinimaInicial, double escalaMaximaInicial) : Eixo (serie->getNome(), unidade, numeroDeDivisoes, escalaMinimaInicial, escalaMaximaInicial){

    this->serieNoEixo = serie;

    if((serie->getTamanho() > 2 ) && (serie->getMaximo() != serie->getMinimo()) ){

        this->escalaMaxima = serie->getMaximo();
        this->escalaMinima = serie->getMinimo();
    }

}

EixoDinamico::~EixoDinamico()
{
    //dtor
}



double EixoDinamico::getEscalaMaxima(){
    if((serieNoEixo->getTamanho() > 2 ) && (serieNoEixo->getMaximo() != serieNoEixo->getMinimo()) ){
        this->escalaMaxima = this->serieNoEixo->getMaximo();
    }
    return this->escalaMaxima;
}

double EixoDinamico::getEscalaMinima(){
    if((serieNoEixo->getTamanho() > 2 ) && (serieNoEixo->getMaximo() != serieNoEixo->getMinimo()) ){
        this->escalaMinima = this->serieNoEixo->getMinimo();
    }
    return this->escalaMinima;
}

