#include "Serie.h"
#include <iostream>
using namespace std;

Serie::Serie(string nome){
    this->nome =  nome;
    int tamanho = 0;

}

Serie::~Serie(){

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


int Serie::getTamanho(){

    return this->tamanho;
}

/*void Serie::adicionar(double valor){
    this->getTamanho();
    if(tamanho<NUMERO_MAXIMO_VALORES){
       this->valores[tamanho]=valor;
       this->tamanho++;
    }

} RETIRADO EM V2.0 */
