#ifndef GRAFICO_H
#define GRAFICO_H

#include <string>
#include "Serie.h"
#include "Eixo.h"
#include "Tela.h"

using namespace std;

/**
 * Representa um Grafico.
 *
 * O grafico deve receber duas series, as informacoes dos eixos e desenhar
 * na tela (que tem tamanho limitado). Portanto, deve-se mapear os valores
 * da Serie para as coordenadas da tela.

 *
 */
class Grafico {
public:
  void setSerieNasAbscissas(Serie* x);
  void setSerieNasOrdenadas(Serie* y);

  void setEixoDasAbscissas(string titulo, string unidade, double minimo, double maximo);
  void setEixoDasOrdenadas(string titulo, string unidade, double minimo, double maximo);

  /**
   * Desenha o grafico, colocando na tela os eixos e os pontos.
   */
  void desenhar();

  /**
   * Apaga a tela.
   */
  void reset();

  /**
   * Define a tela a ser usada
   */
  void setTela(Tela* t);

  Serie* getSerieNasAbscissas();
  Serie* getSerieNasOrdenadas();
  Eixo* getEixoDasAbscissas();
  Eixo* getEixoDasOrdenadas();


private:
  Serie *serieNasAbscissas=new Serie;
  Serie *serieNasOrdenadas=new Serie;
  Eixo *eixoDasAbscissas=new Eixo;
  Eixo *eixoDasOrdenadas=new Eixo;

  Tela *telaT=new Tela;


};

#endif // GRAFICO_H