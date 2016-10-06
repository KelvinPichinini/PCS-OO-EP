#include "Serie.h"
#include <iostream>
using namespace std;

void Serie::setNome(string nome){
    this->nome=nome;
}

bool Serie::estaVazia(){
    if(this->tamanho==0){
        return true;
    }
    else
        return false;


}

string Serie::getNome(){
    return this->nome;
}

double Serie::getValor(int posicao){
    if(posicao>=0 && posicao<NUMERO_MAXIMO_VALORES){
        return this->valores[posicao];
    }
    return 0;
}

double Serie::getMaximo(){//TODO : verificar caso em que o vtor esta vazio
    double maior = this->valores[0];
    for(int i=1;i<this->tamanho;i++){
        if(this->valores[i]>maior){
            maior=this->valores[i];
        }
    }
    return maior;

}

double Serie::getMinimo(){//TODO : verificar caso em que o vtor esta vazio
    double menor = this->valores[0];
    for(int i=1;i<this->tamanho;i++){
        if(this->valores[i]<menor){
            menor=this->valores[i];
        }
    }
    return menor;

}

int Serie::getTamanho(){

    return this->tamanho;
}

void Serie::adicionar(double valor){
    this->getTamanho();
    if(tamanho<NUMERO_MAXIMO_VALORES){
       this->valores[tamanho]=valor;
       this->tamanho++;
    }

}
