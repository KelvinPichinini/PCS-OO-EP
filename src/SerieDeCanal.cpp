#include "SerieDeCanal.h"

using namespace std;

/**
 * Cria uma SerieDeCanal com um nome e uma quantidade máxima de valores.
 * Se a quantidade máxima for 3, por exemplo, a Serie poderá ter os
 * valores 5, 7 e 8. Ao adicionar o valor 2, a série deve ficar com os
 * valores 7, 8 e 2.
 */
SerieDeCanal::SerieDeCanal (string nome, int quantidadeMaxima) : Serie (nome) {

    this->quantidadeMaxima = quantidadeMaxima;
    double* valores = new double[quantidadeMaxima];
    this->valores = valores;
    this->tamanho = 0;


}
SerieDeCanal::~SerieDeCanal(){

}
/**
 * Adiciona o valor a serie.
 *
 * Apenas os últimos 'quantidadeMaxima' valores sao armazenados. Deve
 * ser implementado como uma fila circular.
 *
 * Por exemplo, se a serie tem quantidadeMaxima = 5 e possui os
 * valores 1, 2, 3, 5, 7, ao chamar adicionar(11), a serie ficara
 * 2, 3, 5, 7, 11.
 */
void SerieDeCanal::adicionar (double valor){

    if (tamanho == quantidadeMaxima){
        for (int i=0; i<tamanho-1; i++){
            this->valores[i] = this->valores[i+1];
        }
        this->valores[tamanho-1] = valor;
    }
    else{
        this->valores[tamanho] = valor;
    }
    if(tamanho < quantidadeMaxima){
        this->tamanho++;
   }
}


bool SerieDeCanal::estaVazia(){
    if(this->tamanho==0){
        return true;
    }
    else
        return false;


}


double SerieDeCanal::getValor(int posicao){
    if(posicao>=0 && posicao<quantidadeMaxima){
        return this->valores[posicao];
    }
    return 0;
}

double SerieDeCanal::getMaximo(){
    double maior = this->valores[0];
    for(int i=1;i<this->tamanho;i++){
        if(this->valores[i]>maior){
            maior=this->valores[i];
        }
    }
    return maior;

}

double SerieDeCanal::getMinimo(){
    double menor = this->valores[0];
    for(int i=1;i<this->tamanho;i++){
        if(this->valores[i]<menor){
            menor=this->valores[i];
        }
    }
    return menor;

}

int SerieDeCanal::getTamanho(){

    return this->tamanho;
}

