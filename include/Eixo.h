#ifndef EIXO_H
#define EIXO_H
#include <iostream>
using namespace std;

class Eixo{
public:
    Eixo(string titulo, string unidade, int numeroDeDivisoes,
         double escalaMinima, double escalaMaxima);
    virtual ~Eixo();
    virtual string getTitulo();
    virtual string getUnidade();
    virtual int getNumeroDeDivisoes();
    /**
     * Calcule o incremento da divisao a partir do maximo, minimo
     * e numero de divisoes, seguindo exatamente o enunciado.
     *
     * Deve-se assumir que os valores necessarios ja foram
     * definidos antes de chamar este metodo.
     */
    virtual double getIncrementoDaDivisao();
    virtual double getEscalaMinima();
    virtual double getEscalaMaxima();
    
    
protected:
    string titulo;
    string unidade;
    int numeroDeDivisoes;
    double escalaMaxima;
    double escalaMinima;


};

#endif // EIXO_H
