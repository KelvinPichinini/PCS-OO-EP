#include "Eixo.h"
#include "Grafico.h"
#include <iostream>

using namespace std;

Eixo::Eixo(string titulo, string unidade, int numeroDeDivisoes,
           double escalaMinima, double escalaMaxima){
    
    this->titulo=titulo;
    this->unidade=unidade;
    this->numeroDeDivisoes=numeroDeDivisoes;
    this->escalaMinima=escalaMinima;
    this->escalaMaxima=escalaMaxima;
}

Eixo::~Eixo(){
    
}

string Eixo::getTitulo (){
    return this->titulo;
}

string Eixo::getUnidade(){
    return this->unidade;
}

int Eixo::getNumeroDeDivisoes(){
    
    return this->numeroDeDivisoes;
}

double Eixo::getIncrementoDaDivisao(){
    double incremento,escalaMaxima,escalaMinima;
    int numeroDeDivisoes;
    escalaMaxima = this->getEscalaMaxima();
    escalaMinima = this->getEscalaMinima();
    numeroDeDivisoes = this->numeroDeDivisoes;
    incremento=(escalaMaxima-escalaMinima)/numeroDeDivisoes;
    return incremento;
    
}

double Eixo::getEscalaMinima(){
    return this->escalaMinima;
}

double Eixo::getEscalaMaxima(){
    
    return this->escalaMaxima;
}


