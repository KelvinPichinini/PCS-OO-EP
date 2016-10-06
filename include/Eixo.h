#ifndef EIXO_H
#define EIXO_H
#include <iostream>
using namespace std;

class Eixo{//TODO revisar void setNumeroDeDivisoes
private:
    string titulo;
    string unidade;
    int numeroDeDivisoes;
    double escalaMaxima;
    double escalaMinima;
public:
    void setTitulo(string titulo);
    void setUnidade(string unidade);
    void setNumeroDeDivisoes(int numero);//TODO: depende da tela?
    void setEscalaMaxima(double escalaMaxima);
    void setEscalaMinima(double escalaMinima);
    string getTitulo();
    string getUnidade();
    int getNumeroDeDivisoes();
    double getIncrementoDaDivisao();
    /*
     Calcule o incremento da divisao a partir do maximo, minimo
     e numero de divisoes.

     Deve-se assumir que os valores necessarios ja foram
     definidos antes de chamar este metodo.
    */
    double getEscalaMinima();
    double getEscalaMaxima();



};

#endif // EIXO_H
