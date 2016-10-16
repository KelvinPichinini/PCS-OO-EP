#ifndef GRAFICO_H
#define GRAFICO_H

#include <string>
#include "Serie.h"
#include "Eixo.h"
#include "Tela.h"
#include "SerieDeCanal.h"



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

  Grafico(Tela* tela, Serie* x, Serie* y, Eixo* abscissas, Eixo* ordenadas);

  virtual ~Grafico();


  /**
   * Desenha o grafico, colocando na tela os eixos e os pontos.
   */
  virtual void desenhar();

  /**
   * Apaga a tela.
   */
  virtual void reset();

  /**
   * Define a tela a ser usada
   */
  virtual void setTela(Tela* t);

  virtual Serie* getSerieNasAbscissas();
  virtual Serie* getSerieNasOrdenadas();
  virtual Eixo* getEixoDasAbscissas();
  virtual Eixo* getEixoDasOrdenadas();


private:
  Serie* serieNasAbscissas;
  Serie* serieNasOrdenadas;

  Eixo* eixoDasAbscissas;
  Eixo* eixoDasOrdenadas;

  Tela* telaT=new Tela;


};

#endif // GRAFICO_H
