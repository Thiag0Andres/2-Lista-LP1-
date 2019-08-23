#ifndef VALORMUITOACIMA_H_INCLUDED
#define VALORMUITOACIMA_H_INCLUDED

#include <iostream>
#include <exception>

using namespace std;

class ValorMuitoAcima : public exception{
    public:
    //Construtor
        ValorMuitoAcima() throw();
    //Destrutor
        virtual ~ValorMuitoAcima() throw();
    //Metodo Virtual
        virtual string what();
    protected:
        string erro = "Valor muito acima do permitido";
};

#endif // VALORMUITOACIMA_H_INCLUDED
