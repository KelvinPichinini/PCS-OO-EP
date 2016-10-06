#include <iostream>
#include "Serie.h"
#include "Eixo.h"
#include "Grafico.h"
#include "Tela.h"
#include "InterfaceSerial.h"
#include "IHC.h"

using namespace std;


int main(){

//  TESTES SEM A PLACA INPUT MANUAL
    //int a;
    //TESTE CLASSE Serie


/*
    Serie *s1=new Serie; // Ordenadas
    cout << "==== Serie 1 ===="<<endl;
    cout << "valor[1]"<< s1->getValor(1)<<endl;
    cout <<"empty? "<< s1->estaVazia() << endl;
    cout <<"Tamanho "<< s1->getTamanho() << endl;
    s1->adicionar(13);
    //cout << s1->getTamanho() << endl;
    s1->adicionar(20);
    //cout << s1->getTamanho() << endl;
    s1->adicionar(26);
    s1->adicionar(40);
    //s1->adicionar(50);
    s1->setNome("Distancia");
    cout <<"empty? "<< s1->estaVazia() << endl;
    cout <<"Tamanho "<< s1->getTamanho() << endl;
    cout<<"valor[0]"<< s1->getValor(0)<< endl;
    cout<<"Min "<< s1->getMinimo()<< endl;
    cout<<"Max "<< s1->getMaximo()<< endl;
    cout<<"Nome "<< s1->getNome()<< endl<< endl;


    Serie *s2=new Serie; // Abscissas
    cout << "==== Serie 2 ===="<<endl;
    cout << "valor[0]"<< s2->getValor(0)<<endl;
    cout <<"empty? "<< s2->estaVazia() << endl;
    cout <<"Tamanho "<< s2->getTamanho() << endl;
    s2->adicionar(0);
    //cout << s2->getTamanho() << endl;
    s2->adicionar(10);
    //cout << s2->getTamanho() << endl;
    s2->adicionar(20);
    s2->adicionar(50);
    //s2->adicionar(0);
    s2->setNome("Tempo");
    cout <<"empty? "<< s2->estaVazia() << endl;
    cout <<"Tamanho "<< s2->getTamanho() << endl;
    cout<<"valor[0]"<< s2->getValor(0)<< endl;
    cout<<"Min "<< s2->getMinimo()<< endl;
    cout<<"Max "<< s2->getMaximo()<< endl;
    cout<<"Nome "<< s2->getNome()<< endl<< endl;




    //TESTE CLASSE Eixo

    Eixo *e1 = new Eixo;
    e1->setTitulo("Espaco");

    e1->setEscalaMaxima(30);
    e1->setEscalaMinima(0);
    //e1->setNumeroDeDivisoes(2);
    e1->setUnidade("metros");
    cout<<endl << "eixo 1" << endl;
    cout << e1->getTitulo() << endl;
    cout <<"Escala max: "<< e1->getEscalaMaxima()<<endl;
    cout <<"Escala min: "<< e1->getEscalaMinima()<<endl;
    cout <<"Num De divisoes: "<< e1->getNumeroDeDivisoes()<<endl;
    cout <<"Incremento da divisao: "<< e1->getIncrementoDaDivisao()<<endl << endl<<endl;

    Eixo *e2 = new Eixo;
    e2->setEscalaMaxima(60);
    e2->setEscalaMinima(0);
    //e2->setNumeroDeDivisoes(2);
    e2->setUnidade("segundos");
    e2->setTitulo("Tempo");

    cout<< "eixo 2" << endl;
    cout << e2->getTitulo() << endl;
    cout <<"Escala max: "<< e2->getEscalaMaxima()<<endl;
    cout <<"Escala min: "<< e2->getEscalaMinima()<<endl;
    cout <<"Num De divisoes: "<< e2->getNumeroDeDivisoes()<<endl;
    cout <<"Incremento da divisao: "<< e2->getIncrementoDaDivisao()<<endl<<endl<<endl;

    //TESTE CLASSE GRAFICO

    Grafico *g1 = new Grafico;
    g1->setSerieNasAbscissas(s2);
    g1->setSerieNasOrdenadas(s1);
    //cout<< g1->getSerieNasAbscissas()->getValor(1)<<endl;
    //cout<< g1->getSerieNasOrdenadas()->getValor(2);
    g1->setEixoDasAbscissas("Tempo","(s)",e2->getEscalaMinima(),e2->getEscalaMaxima());
    //g1->getEixoDasAbscissas()->getTitulo();
    g1->setEixoDasOrdenadas("Espaco","(m)",e1->getEscalaMinima(),e1->getEscalaMaxima());
    g1->desenhar();

    */




    string nome,canalAbscissas, canalOrdenadas, tituloAbscissas, tituloOrdenadas, unidadeAbscissas, unidadeOrdenadas;
    string COMM;
    double escalaMinX,escalaMaxX,escalaMinY,escalaMaxY;

    InterfaceSerial *is = new InterfaceSerial;


    Grafico *g = new Grafico;

    g->setTela( new Tela());


    IHC *ihc = new IHC;

    Serie* serieAbscissas = new Serie;
    Serie* serieOrdenadas = new Serie;


//PARAMETROS EIXO DAS ABSCISSAS
    cout<<"Nome serie no eixo X: " << endl;
    cin >> nome;
    serieAbscissas->setNome(nome);

    cout<<"Canal a ser utilizado: " << endl;
    cin >> canalAbscissas;

    cout << "Titulo no eixo X: " <<endl;
    cin >> tituloAbscissas;

    cout << "Unidade no eixo X: " <<endl;
    cin >> unidadeAbscissas;


    cout << "Escala MINIMA do eixo X: " << endl;
    cin >> escalaMinX;

    cout << "Escala MAXIMA do eixo X: " << endl;
    cin >> escalaMaxX;
    cout <<endl<<endl;


//PARAMETROS EIXO DAS ORDENADAS
    cout<<"Nome serie no eixo Y: " << endl;
    cin >> nome;
    serieOrdenadas->setNome(nome);

    cout<<"Canal a ser utilizado: " << endl;
    cin >> canalOrdenadas;

    cout << "Titulo no eixo: " <<endl;
    cin >> tituloOrdenadas;

    cout << "Unidade no eixo Y: " <<endl;
    cin >> unidadeOrdenadas;

    cout << "Escala MINIMA do eixo Y: " << endl;
    cin >> escalaMinY;

    cout << "Escala MAXIMA do eixo Y: " << endl;
    cin >> escalaMaxY;


    cout <<endl<<endl<<"Digite o nome da porta de Comunicacao com a placa: "<<endl;
    cin>> COMM;


    g->setSerieNasAbscissas(serieAbscissas);
    g->setSerieNasOrdenadas(serieOrdenadas);
    g->setEixoDasAbscissas(tituloAbscissas,unidadeAbscissas,escalaMinX,escalaMaxX);
    g->setEixoDasOrdenadas(tituloOrdenadas,unidadeOrdenadas,escalaMinY,escalaMaxY);

    is->inicializar(COMM);
    is->registrar(canalAbscissas,serieAbscissas);
    is->registrar(canalOrdenadas,serieOrdenadas);




    while(!ihc->escFoiPressionado()){
        int i=0;
        is->atualizar();
        g->reset();
        g->desenhar();
        //cout <<"y :"<< serieOrdenadas->getValor(i) << endl ;
        //cout <<"x :"<< serieAbscissas->getValor(i) << endl ;
        ihc->sleep();
        i++;


    }







    return 0;
}
