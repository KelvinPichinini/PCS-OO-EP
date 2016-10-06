#include "Serie.h"
#include <iostream>
using namespace std;

Serie::Serie(string nome){
    this->nome=nome;
}

Serie::~Serie(){
    
}

string Serie::getNome(){
    return this->nome;
}

bool Serie::estaVazia(){//REVER
    if (this->tamanho==0){
        return true;
    } else return false;
}

int Serie::getTamanho(){
    return this->tamanho;
}

double Serie::getValor(int posicao){
    if (posicao<this->tamanho && posicao>=0){
        return this->valores[posicao];
    } else return 0;
}

double Serie::getMaximo(){
    if (this->tamanho>0){
        
        double maximo = valores[0];
        for (int i=1; i<this->tamanho; i++){
            if (valores[i]>maximo){
                maximo=valores[i];
            }
        }
        return maximo;
    } else return 0;
}

double Serie::getMinimo(){
    if (this->tamanho>0){
        
        double minimo = valores [0];
        for (int i=1; i<this->tamanho; i++){
            if (valores[i]>minimo){
                minimo=valores[i];
            }
        }
        return minimo;
    } else return 0;
}
