#include <iostream>
#include "Serie.h"
#include "Eixo.h"
#include "Grafico.h"
#include "Tela.h"
#include "InterfaceSerial.h"
#include "IHC.h"
#include "Tempo.h"
#include "EixoDinamico.h"

#define NUMERO_DE_DIVISOES_X 6
#define NUMERO_DE_DIVISOES_Y 3

using namespace std;


int main(){

//                          TESTES SEM A PLACA INPUT MANUAL
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






 /* //           MAIN DO EP1


    string nome,canalAbscissas, canalOrdenadas, tituloAbscissas, tituloOrdenadas, unidadeAbscissas, unidadeOrdenadas;
    string COMM;
    double escalaMinX,escalaMaxX,escalaMinY,escalaMaxY;

    InterfaceSerial *is = new InterfaceSerial("COM3");






    SerieDeCanal* serieAbscissas = new SerieDeCanal("Abscissas",10);
    SerieDeCanal* serieOrdenadas = new SerieDeCanal("Ordenadas",10);


//PARAMETROS EIXO DAS ABSCISSAS
    cout<<"Nome serie no eixo X: " << endl;
    cin >> nome;

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
    Eixo* x = new Eixo(tituloAbscissas,unidadeAbscissas,10,escalaMinX,escalaMaxX);
    Eixo* y = new Eixo(tituloOrdenadas,unidadeOrdenadas,10,escalaMinY,escalaMaxY);

    Grafico*g = new Grafico(new Tela(),serieAbscissas,serieOrdenadas,x,y);


    is->inicializar();
    is->registrar(canalAbscissas,serieAbscissas);
    is->registrar(canalOrdenadas,serieOrdenadas);




    while(!IHC::escFoiPressionado()){
        int i=0;
        is->atualizar();
        g->reset();
        g->desenhar();
        //cout <<"y :"<< serieOrdenadas->getValor(i) << endl ;
        //cout <<"x :"<< serieAbscissas->getValor(i) << endl ;
        IHC::sleep();
        i++;


    }
*/

/*
//                  TESTANDO TEMPO, FILA CIRCULAR DA SERIEDECANAL e EIXODINAMICO
    int tamanho,c;
    double a,b;
    cout << "digite o tamanho" << endl;
    cin >> tamanho;
    Tempo* t = new Tempo(tamanho);
    SerieDeCanal* s = new SerieDeCanal("Volume",tamanho);

    EixoDinamico* ey = new EixoDinamico(s,"db",3,0,10);
    EixoDinamico* ex = new EixoDinamico(t,"segundos",5,0,10);

    Tela*tela = new Tela();
    Grafico* g = new Grafico(tela,t,s,ex,ey);
    cout << s->getTamanho() << endl;
    for(int i = 0; i<tamanho+5;i++){
        cin >> a;
        s->adicionar(a);
        ex->getIncrementoDaDivisao();
        ey->getIncrementoDaDivisao();
        t->incrementar();

        cout << "SERIE X: ";
        for(int j = 0; j < s->getTamanho(); j++){
             b = s->getValor(j);
             cout << b << ",";

        }
        cout << endl << endl <<"TEMPO: ";
        for(int k = 0; k < t->getTamanho(); k++){
             c = t->getValor(k);
             cout << c << ",";

        }
        cout << endl;


        cout << endl << "=== Nome da SERIE ====:" << s->getNome()<< endl;
        cout << " Tamanho :" << s->getTamanho() << endl;
        cout << " Max :" << s->getMaximo() << endl;
        cout << " Min :" << s->getMinimo() << endl;
        cout << "==============================================" <<endl << endl ;

        cout << endl << "=== Nome do EIXO X ====:" << ex->getTitulo()<< endl;
        cout << "  Unidade :" << ex->getUnidade() << endl;
        cout << "  ESCALA Max :" << ex->getEscalaMaxima() << endl;
        cout << "  ESCALA Min:" << ex->getEscalaMinima() << endl;
        cout << "  Incremento da divisao:" << ex->getIncrementoDaDivisao() << endl;
        cout << "  Numero de divisoes:" << ex->getNumeroDeDivisoes()<< endl;
        cout << "==============================================" <<endl ;

        cout << endl << "=== Nome do EIXO Y ====:" << ex->getTitulo()<< endl;
        cout << "  Unidade :" << ey->getUnidade() << endl;
        cout << "  ESCALA Max :" << ey->getEscalaMaxima() << endl;
        cout << "  ESCALA Min:" << ey->getEscalaMinima() << endl;
        cout << "  Incremento da divisao:" << ey->getIncrementoDaDivisao() << endl;
        cout << "  Numero de divisoes:" << ey->getNumeroDeDivisoes()<< endl;
        cout << "==============================================" <<endl << endl<< endl<<"****"<<endl ;


        //g->desenhar();
        //g->reset();

    }
    */

    int escolhaSerieX,escolhaSerieY,tamanhoSerieX,tamanhoSerieY;
    bool verificador = false;
    char escolhaEixoX,escolhaEixoY;
    string unidadeEixoX,unidadeEixoY,tituloDoEixo;
    double xEscalaMin,xEscalaMax,yEscalaMin,yEscalaMax;
    string opcoes[7] ={"Tempo","ACCX","ACCY","ACCZ","MAGX","MAGY","MAGZ"};
    Eixo* abscissaEixo;
    Eixo* ordenadaEixo;
    SerieDeCanal* serieX;
    Tempo* tempoX;
    SerieDeCanal* serieY;
    Tempo* tempoY;
    Tela* tela = new Tela();
    Grafico* g;
    InterfaceSerial* is = new InterfaceSerial("COM3");
    is->inicializar();


    // CONFIGURACOES EIXO E SERIE NAS ABSCISSAS

    do{
        cout << "Escolha uma serie para o eixo X :" << endl;
        cout << "0) Tempo" << endl << "1) ACCX" << endl <<
            "2) ACCY" << endl << "3) ACCZ" << endl << "4) MAGX"<<
            endl << "5) MAGY" << endl << "6) MAGZ" <<endl;
        cin >> escolhaSerieX;
        if(escolhaSerieX == 0 || escolhaSerieX == 1 || escolhaSerieX==2 || escolhaSerieX==3 || escolhaSerieX==4 || escolhaSerieX==5 || escolhaSerieX==6) verificador =true;
        else {cout <<  endl <<"ERRO escolha incorreta" << endl << endl;}
    }while (verificador == false); // ERRO, SE USUARIO DIGITAR LETRA QUEBRA O PROGRAMA
    verificador = false;

    cout << endl << "Informe a quantidade maxima de valores: ";
    cin >> tamanhoSerieX;

    //CRIANDO SERIE DA ABSCISSA
    if(escolhaSerieX != 0){
        serieX = new SerieDeCanal(opcoes[escolhaSerieX],tamanhoSerieX);
    }
    else{
        tempoX = new Tempo(tamanhoSerieX);
    }


    do{
        cout <<endl<< "O eixo deve ser (e)statico ou (d)inamico: ";
        cin >> escolhaEixoX;
        if(escolhaEixoX == 'e' || escolhaEixoX == 'E' || escolhaEixoX == 'd' || escolhaEixoX == 'D'){
            verificador = true ;
        }
    }while(verificador == false);
    verificador = false;

    cout <<endl<< "Informe a unidade do eixo: ";
    cin >> unidadeEixoX;

    if(escolhaEixoX == 'd' || escolhaEixoX == 'D'){

        do{
            cout <<endl<< "Informe a escala minima inicial: ";
            cin >> xEscalaMin;

            cout <<endl<< "Informe a escala maxima inicial: ";
            cin >> xEscalaMax;

            if(xEscalaMax <= xEscalaMin){
                cout << endl <<"ERRO : Escala MAX deve ser maior que escala MIN " << endl;
            }
            else verificador = true;

        }while(verificador == false);
        verificador = false;

        //CRIANDO EIXO DINAMICO ABSCISSA
        if(escolhaSerieX != 0){
            abscissaEixo = new EixoDinamico(serieX,unidadeEixoX,NUMERO_DE_DIVISOES_X,xEscalaMin,xEscalaMax);
        }
        else{
            abscissaEixo = new EixoDinamico(tempoX,unidadeEixoX,NUMERO_DE_DIVISOES_X,xEscalaMin,xEscalaMax);


        }

    }
    else if(escolhaEixoX == 'e' || escolhaEixoX == 'E'){
        cout <<endl<< "Informe o titulo do eixo: ";
        cin >> tituloDoEixo;

        do{
            cout <<endl<< "Informe a escala minima: ";
            cin >> xEscalaMin;

            cout <<endl<< "Informe a escala maxima: ";
            cin >> xEscalaMax;

            if(xEscalaMax <= xEscalaMin){
                cout << endl <<"ERRO : Escala MAX deve ser maior que escala MIN " << endl;
            }
            else verificador = true;

        }while(verificador == false);
        verificador = false;


        //CRIANDO EIXO ESTATICO ABSCISSA
        abscissaEixo = new Eixo(tituloDoEixo,unidadeEixoX,NUMERO_DE_DIVISOES_X,xEscalaMin,xEscalaMax);
    }


    // CONFIGURACOES EIXO E SERIE NAS ORDENADAS

    do{
        cout << endl << endl << "Escolha uma serie para o eixo Y :" << endl;
        cout << "0) Tempo" << endl << "1) ACCX" << endl <<
            "2) ACCY" << endl << "3) ACCZ" << endl << "4) MAGX"<<
            endl << "5) MAGY" << endl << "6) MAGZ" <<endl;
        cin >> escolhaSerieY;

        if(escolhaSerieY == 0 || escolhaSerieY==1 || escolhaSerieY==2 || escolhaSerieY==3 || escolhaSerieY==4 || escolhaSerieY==5 || escolhaSerieY==6) verificador =true;
        else {cout <<  endl <<"ERRO escolha incorreta" << endl << endl;}

    }while (verificador == false);
    verificador = false;

    cout << endl << "Informe a quantidade maxima de valores: ";
    cin >> tamanhoSerieY;

    //CRIANDO SERIE DE CANAL OU TEMPO
    if(escolhaSerieY != 0){
        serieY = new SerieDeCanal(opcoes[escolhaSerieY],tamanhoSerieY);
    }
    else{
        tempoY = new Tempo(tamanhoSerieY);
    }


    do{
        cout <<endl<< "O eixo deve ser (e)statico ou (d)inamico: ";
        cin >> escolhaEixoY;
        if(escolhaEixoY == 'e' || escolhaEixoY == 'E' || escolhaEixoY == 'd' || escolhaEixoY == 'D'){
            verificador = true ;
        }
    }while(verificador == false);
    verificador = false;

    cout <<endl<< "Informe a unidade do eixo: ";
    cin >> unidadeEixoY;

    if(escolhaEixoY == 'd' || escolhaEixoY == 'D'){

        do{
            cout <<endl<< "Informe a escala minima inicial: ";
            cin >> yEscalaMin;

            cout <<endl<< "Informe a escala maxima inicial: ";
            cin >> yEscalaMax;

            if(yEscalaMax <= yEscalaMin){
                cout << endl <<"ERRO : Escala MAX deve ser maior que escala MIN " << endl;
            }
            else verificador = true;

        }while(verificador == false);
        verificador = false;

        // CRIANDO EIXO DINAMICO ORDENADAS

        if(escolhaSerieY != 0){
            ordenadaEixo = new EixoDinamico(serieY,unidadeEixoY,NUMERO_DE_DIVISOES_Y,yEscalaMin,yEscalaMax);
        }
        else{
            ordenadaEixo = new EixoDinamico(tempoY,unidadeEixoY,NUMERO_DE_DIVISOES_Y,yEscalaMin,yEscalaMax);

        }


    }
    else if(escolhaEixoY == 'e' || escolhaEixoY == 'E'){

        cout <<endl<< "Informe o titulo do eixo: ";
        cin >> tituloDoEixo;

        do{
            cout <<endl<< "Informe a escala minima: ";
            cin >> yEscalaMin;

            cout <<endl<< "Informe a escala maxima: ";
            cin >> yEscalaMax;

            if(yEscalaMax <= yEscalaMin){
                cout << endl <<"ERRO : Escala MAX deve ser maior que escala MIN " << endl;
            }
            else verificador = true;

        }while(verificador == false);
        verificador = false;

        //CRIANDO EIXO ESTATICO

        ordenadaEixo = new Eixo(tituloDoEixo,unidadeEixoY,NUMERO_DE_DIVISOES_Y,yEscalaMin,yEscalaMax);

    }


/*
        serieY->adicionar(1);
        serieY->adicionar(4);
        serieY->adicionar(5);
        serieY->adicionar(10);

        serieX->adicionar(0);
        serieX->adicionar(1);
        serieX->adicionar(2);
        serieX->adicionar(3);

        cout << endl << "=== Nome do EIXO X ====:" << abscissaEixo->getTitulo()<< endl;
        cout << "  Unidade :" << abscissaEixo->getUnidade() << endl;
        cout << "  ESCALA Max :" << abscissaEixo->getEscalaMaxima() << endl;
        cout << "  ESCALA Min:" << abscissaEixo->getEscalaMinima() << endl;
        cout << "  Incremento da divisao:" << abscissaEixo->getIncrementoDaDivisao() << endl;
        cout << "  Numero de divisoes:" << abscissaEixo->getNumeroDeDivisoes()<< endl;
        cout << "==============================================" <<endl ;

        cout << endl << "=== Nome do EIXO Y ====:" << ordenadaEixo->getTitulo()<< endl;
        cout << "  Unidade :" << ordenadaEixo->getUnidade() << endl;
        cout << "  ESCALA Max :" << ordenadaEixo->getEscalaMaxima() << endl;
        cout << "  ESCALA Min:" << ordenadaEixo->getEscalaMinima() << endl;
        cout << "  Incremento da divisao:" << ordenadaEixo->getIncrementoDaDivisao() << endl;
        cout << "  Numero de divisoes:" << ordenadaEixo->getNumeroDeDivisoes()<< endl;
        cout << "==============================================" <<endl << endl<< endl<<"****"<<endl ;
        */



    if(escolhaSerieX == 0 && escolhaSerieY == 0){
        g = new Grafico(tela,tempoX,tempoY,abscissaEixo,ordenadaEixo);
    }
    if(escolhaSerieX == 0 && escolhaSerieY != 0){
        g = new Grafico(tela,tempoX,serieY,abscissaEixo,ordenadaEixo);
    }
    if(escolhaSerieX != 0 && escolhaSerieY == 0){
        g = new Grafico(tela,serieX,tempoY,abscissaEixo,ordenadaEixo);
    }
    if(escolhaSerieX == 0 && escolhaSerieY == 0){
        g = new Grafico(tela,serieX,serieY,abscissaEixo,ordenadaEixo);
    }
    g->desenhar();
    int a =1;

    while(!IHC::escFoiPressionado()){


        if(escolhaSerieX == 0){
            tempoX->incrementar();
        }

        if(escolhaSerieY == 0){
            tempoY->incrementar();
        }

        is->atualizar();
        g->desenhar();
        g->reset();
        IHC::sleep();
    }


















    return 0;
}
