#include "Tempo.h"

using namespace std;


Tempo::Tempo(int tamanhoDaFaixa) : Serie ("Tempo"){

    this->tamanhoDaFaixa = tamanhoDaFaixa;
    double* valores = new double[tamanhoDaFaixa];
    this->valores = valores;
    this->tamanho = 0;



}

Tempo::~Tempo(){

}

void Tempo::incrementar(){

    if (this->estaVazia()){
        this->valores[tamanho] = 0;

    }else{

        if (this->tamanho == tamanhoDaFaixa){
            for (int i=0; i<tamanho-1; i++){
                this->valores[i]=this->valores[i+1];
            }
            this->valores[tamanho-1] = this->valores[tamanho-1]+1;
        }
        else{
            this->valores[tamanho] = this->valores[tamanho-1]+1;
        }
    }
    if(tamanho < tamanhoDaFaixa){
        this->tamanho++;
    }
}



bool Tempo::estaVazia(){
    if(this->tamanho==0){
        return true;
    }
    else
        return false;


}

double Tempo::getValor(int posicao){
    if(posicao>=0 && posicao<tamanhoDaFaixa && estaVazia()==false){
        return this->valores[posicao];
    }
    return 0;
}

double Tempo::getMaximo(){
    double maior = this->valores[0];
    for(int i=1;i<this->tamanho;i++){
        if(this->valores[i]>maior){
            maior=this->valores[i];
        }
    }
    return maior;

}

double Tempo::getMinimo(){
    double menor = this->valores[0];
    for(int i=1;i<this->tamanho;i++){
        if(this->valores[i]<menor){
            menor=this->valores[i];
        }
    }
    return menor;

}

int Tempo::getTamanho(){

    return this->tamanho;
}


