//
//  EixoDinamico.cpp
//  _2
//
//  Created by Arthur Wachslicht on 06/10/16.
//  Copyright © 2016 Arthur Wachslicht. All rights reserved.
//

#include "EixoDinamico.h"

EixoDinamico::EixoDinamico(Serie* serie, string unidade, int numeroDeDivisoes,
                           double escalaMinimaInicial, double escalaMaximaInicial) : Eixo (serie->getNome(), unidade, numeroDeDivisoes, escalaMinimaInicial, escalaMaximaInicial){
    
    this->unidade=unidade;
    this->numeroDeDivisoes=numeroDeDivisoes;
    this->escalaMinima=escalaMinimaInicial;
    this->escalaMaxima=escalaMaximaInicial;
    
}

EixoDinamico::~EixoDinamico(){
    
    
}