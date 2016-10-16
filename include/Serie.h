#ifndef SERIE_H
#define SERIE_H
#include <iostream>


#define NUMERO_MAXIMO_VALORES 10

using namespace std;


class Serie{

protected:
    string nome;
    int tamanho;

public:
    Serie(string nome);
    virtual ~Serie();
    //void setNome(string nome); (RETIRADO EM V2.0)
    string getNome();
    virtual bool estaVazia() = 0;
    virtual int getTamanho() = 0;
    virtual double getValor(int posicao) = 0;
    virtual double getMaximo() = 0;
    virtual double getMinimo() = 0;
    //void adicionar(double valor); (RETIRADO EM V2.0

};


#endif // SERIE_H
