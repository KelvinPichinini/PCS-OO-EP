#ifndef EIXO_H
#define EIXO_H
#include <iostream>

#define LARGURA_UTIL 61
#define ALTURA_UTIL 16

#define DIVISAO_ABSCISSA 10
#define DIVISAO_ORDENADA 5

using namespace std;

class Eixo{
protected:
    string titulo;
    string unidade;
    int numeroDeDivisoes;
    double escalaMaxima;
    double escalaMinima;
public:
    /*void setTitulo(string titulo);
    void setUnidade(string unidade);
    void setNumeroDeDivisoes(int numero);//TODO: depende da tela?
    void setEscalaMaxima(double escalaMaxima);
    void setEscalaMinima(double escalaMinima);

    RETIRADO EM V2.0 substituido pelo construtor

    */
    Eixo(string titulo, string unidade, int numeroDeDivisoes,
          double escalaMinima, double escalaMaxima);
    virtual string getTitulo();
    virtual string getUnidade();
    virtual int getNumeroDeDivisoes();
    virtual double getIncrementoDaDivisao();
    /*
     Calcule o incremento da divisao a partir do maximo, minimo
     e numero de divisoes.

     Deve-se assumir que os valores necessarios ja foram
     definidos antes de chamar este metodo.
    */
    virtual double getEscalaMinima();
    virtual double getEscalaMaxima();



};

#endif // EIXO_H
