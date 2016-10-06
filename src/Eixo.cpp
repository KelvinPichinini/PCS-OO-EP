#include "Eixo.h"
#include "Grafico.h"
#include <iostream>

using namespace std;

void Eixo::setTitulo(string titulo){
    this->titulo=titulo;
}

void Eixo::setUnidade(string unidade){
    this->unidade=unidade;
}

void Eixo::setEscalaMaxima(double escalaMaxima){
    this->escalaMaxima=escalaMaxima;
}

void Eixo::setEscalaMinima(double escalaMinima){
    this->escalaMinima=escalaMinima;
}

string Eixo::getTitulo(){
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

double Eixo::getEscalaMaxima(){
    return this->escalaMaxima;
}

double Eixo::getEscalaMinima(){
    return this->escalaMinima;
}

void Eixo::setNumeroDeDivisoes(int numero){
    this->numeroDeDivisoes= numero;
}

