//
//  Tempo.hpp
//  _2
//
//  Created by Arthur Wachslicht on 06/10/16.
//  Copyright © 2016 Arthur Wachslicht. All rights reserved.
//

#ifndef Tempo_h
#define Tempo_h

#include <stdio.h>
#include "Serie.h"

class Tempo : public Serie {
public:
    /**
     * O nome da serie deve ser sempre "Tempo". O tamanhoDaFaixa
     * define o tamanho da faixa de tempo. Se o tamanhoDaFaixa for
     * 3, por exemplo, o tamanho máximo da Serie sera 3 e,
     * portanto, só os 3 últimos valores serão guardados.
     */
    Tempo(int tamanhoDaFaixa);
    virtual ~Tempo();
    /**
     * Coloca o próximo valor de tempo nesta Serie.
     */
    virtual void incrementar();
    
private:
    int tamanhoDaFaixa;
    
};

#endif /* Tempo_h */
