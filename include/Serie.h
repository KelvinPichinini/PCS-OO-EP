#ifndef SERIE_H
#define SERIE_H
#include <iostream>


#define NUMERO_MAXIMO_VALORES 10

using namespace std;


class Serie{
public:
    Serie(string nome);
    virtual ~Serie();
    string getNome();
    /**
     * Informa se a serie esta vazia.
     true= vazia.
     false= não vazia.
     */
    virtual bool estaVazia() = 0;
    /**
     * Informa o numero de valores que a serie possui.
     */
    virtual int getTamanho() = 0;
    /**
     * Obtem o valor que esta na posicao definida da serie. A contagem de
     * valores comeca em 0.
     *
     * Em caso de posicoes invalidas, retorne 0.
     *
     * Por exemplo, considere a serie: 1, 2, 3, 5, 7, 11, 13. O metodo
     * getValor(0) deve retornar 1; getValor(6) deve retornar 13.
     */
    virtual double getValor(int posicao) = 0;
    /**
     * Obtem o maior valor da serie. Caso esteja vazia, retorna 0.
     */
    virtual double getMaximo() = 0;
    /**
     * Obtem o menor valor da serie. Caso esteja vazia, retorna 0.
     */
    virtual double getMinimo() = 0;

    
protected:
   
    string nome;
    double valores[NUMERO_MAXIMO_VALORES]={};
    int tamanho=0;
    
    
    
private:
    

};


#endif // SERIE_H
