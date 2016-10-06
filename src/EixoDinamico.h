//
//  EixoDinamico.hpp
//  _2
//
//  Created by Arthur Wachslicht on 06/10/16.
//  Copyright © 2016 Arthur Wachslicht. All rights reserved.
//

#ifndef EixoDinamico_h
#define EixoDinamico_h


#include "Eixo.h"
#include "Serie.h"

#include <iostream>

class EixoDinamico : public Eixo {
public:
    /**
     * O titulo do eixo deve ser o nome da serie.
     */
    EixoDinamico(Serie* serie, string unidade, int numeroDeDivisoes,
                 double escalaMinimaInicial, double escalaMaximaInicial);
    virtual ~EixoDinamico();
    
    
    
};

#endif /* EixoDinamico_h */
