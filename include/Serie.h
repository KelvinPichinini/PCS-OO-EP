#ifndef SERIE_H
#define SERIE_H
#include <iostream>


#define NUMERO_MAXIMO_VALORES 10

using namespace std;


class Serie{
private:
    string nome;
    double valores[NUMERO_MAXIMO_VALORES]={};
    int tamanho=0;
public:
    void setNome(string nome);
    string getNome();
    bool estaVazia();
    int getTamanho();
    double getValor(int posicao);
    double getMaximo();
    double getMinimo();
    void adicionar(double valor);

};


#endif // SERIE_H
