#include "Grafico.h"
#include "Serie.h"
#include "Eixo.h"
#include "Tela.h"

#include <iostream>

#define NUMERO_MAXIMO_VALORES 10
#define LARGURA_UTIL 61
#define ALTURA_UTIL 16

#define DIVISAO_ABSCISSA 10
#define DIVISAO_ORDENADA 5

void Grafico::setSerieNasAbscissas(Serie *x){
    this->serieNasAbscissas = x;

}

void Grafico::setSerieNasOrdenadas(Serie* y){
    this->serieNasOrdenadas = y;

}

void Grafico::setEixoDasAbscissas(string titulo, string unidade, double minimo, double maximo){
    this->eixoDasAbscissas->setTitulo(titulo);
    this->eixoDasAbscissas->setUnidade(unidade);
    this->eixoDasAbscissas->setEscalaMaxima(maximo);
    this->eixoDasAbscissas->setEscalaMinima(minimo);
    this->eixoDasAbscissas->setNumeroDeDivisoes((LARGURA_UTIL-1)/DIVISAO_ABSCISSA); //TODO Verificar



}
void Grafico::setEixoDasOrdenadas(string titulo, string unidade, double minimo, double maximo){
    this->eixoDasOrdenadas->setTitulo(titulo);
    this->eixoDasOrdenadas->setUnidade(unidade);
    this->eixoDasOrdenadas->setEscalaMaxima(maximo);
    this->eixoDasOrdenadas->setEscalaMinima(minimo);
    this->eixoDasOrdenadas->setNumeroDeDivisoes((ALTURA_UTIL-1)/DIVISAO_ORDENADA); //TODO Verificar


}

  /**
   * Desenha o grafico, colocando na tela os eixos e os pontos.
   */
void Grafico::desenhar(){//TODO : TESTAR
   telaT->setEixoDasAbscissas(this->eixoDasAbscissas);
   telaT->setEixoDasOrdenadas(this->eixoDasOrdenadas);

   for (int i=0; i<serieNasOrdenadas->getTamanho() && i<serieNasAbscissas->getTamanho(); i++){

        double pontoX = serieNasAbscissas->getValor(i);
        double pontoY = serieNasOrdenadas->getValor(i);
        double escalaMaxAbscissas = eixoDasAbscissas->getEscalaMaxima();
        double escalaMinAbscissas = eixoDasAbscissas->getEscalaMinima();
        double escalaMaxOrdenadas = eixoDasOrdenadas->getEscalaMaxima();
        double escalaMinOrdenadas = eixoDasOrdenadas->getEscalaMinima();
        int pontoXAjustado = (pontoX-escalaMinAbscissas)*(LARGURA_UTIL-1)/(escalaMaxAbscissas-escalaMinAbscissas);
        int pontoYAjustado =  (pontoY-escalaMinOrdenadas)*(ALTURA_UTIL-1)/(escalaMaxOrdenadas-escalaMinOrdenadas);

        if(pontoY<=escalaMaxOrdenadas && pontoY>=escalaMinOrdenadas && //Ordenadas dentro da escala (inclusive em cima do eixo)
           pontoX<=escalaMaxAbscissas && pontoX>=escalaMinAbscissas //Abscissas dentro da escala (inclusive em cima do eixo)
           )
            telaT->adicionarPontoEm(pontoXAjustado , pontoYAjustado);

        else if((pontoY>escalaMaxOrdenadas) && ( pontoX<=escalaMaxAbscissas && pontoX>=escalaMinAbscissas)) //Fora do limite SUPERIOR no eixo y
                telaT->adicionarForaDoLimiteDasOrdenadasEm(pontoXAjustado , Limite::SUPERIOR);

        else if((pontoY<escalaMinOrdenadas) && ( pontoX<=escalaMaxAbscissas && pontoX>=escalaMinAbscissas)) //Fora do limite INFERIOR no eixo y
                telaT->adicionarForaDoLimiteDasOrdenadasEm(pontoXAjustado , Limite::INFERIOR);

        else if((pontoX>escalaMaxAbscissas) && (pontoY<=escalaMaxOrdenadas && pontoY>=escalaMinOrdenadas)) //Fora do limite SUPERIOR no eixo x
                telaT->adicionarForaDoLimiteDasAbscissasEm(pontoYAjustado,Limite::SUPERIOR);

        else if((pontoX<escalaMaxAbscissas) && (pontoY<=escalaMaxOrdenadas && pontoY>=escalaMinOrdenadas))//For do limite INFERIOR no eixo y
                telaT->adicionarForaDoLimiteDasAbscissasEm(pontoYAjustado,Limite::INFERIOR);

        else if(pontoX>escalaMaxAbscissas && pontoY>escalaMaxOrdenadas)
                telaT->adicionarForaDoLimiteEm(Limite::SUPERIOR,Limite::SUPERIOR);

        else if(pontoX>escalaMaxAbscissas && pontoY<escalaMinOrdenadas)
                telaT->adicionarForaDoLimiteEm(Limite::SUPERIOR,Limite::INFERIOR);

        else if(pontoX<escalaMinAbscissas && pontoY>escalaMaxOrdenadas)
                telaT->adicionarForaDoLimiteEm(Limite::INFERIOR,Limite::SUPERIOR);

        else
                telaT->adicionarForaDoLimiteEm(Limite::INFERIOR,Limite::INFERIOR);
    }




   telaT->desenhar();



}


  /**
   * Apaga a tela.
   */
void Grafico::reset(){
    this->telaT->apagar();
}

  /**
   * Define a tela a ser usada
   */
void Grafico::setTela(Tela* t){
    this->telaT=t;

}

Serie* Grafico::getSerieNasAbscissas(){
    return this->serieNasAbscissas;
  }
  Serie* Grafico::getSerieNasOrdenadas(){
    return this->serieNasOrdenadas;
  }
  Eixo* Grafico::getEixoDasAbscissas(){
    return this->eixoDasAbscissas;
  }
  Eixo* Grafico::getEixoDasOrdenadas(){
    return this->eixoDasOrdenadas;
  }


