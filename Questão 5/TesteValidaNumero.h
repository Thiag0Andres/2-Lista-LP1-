#ifndef TESTEVALIDANUMERO_H_INCLUDED
#define TESTEVALIDANUMERO_H_INCLUDED

#include <iostream>
#include <exception>
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcima.h"

class TesteValidaNumero{
    public:
    //Construtor
        TesteValidaNumero();
    //Metodo
        void validaNumero(int num);
    private:
        int num;
};

#endif // TESTEVALIDANUMERO_H_INCLUDED
