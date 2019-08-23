#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include <iostream>
#include <exception>
#include <string>

class SaldoNaoDisponivelException: public std::exception{
    public:
    //Construtor
        SaldoNaoDisponivelException() throw();
    //Construtor
        virtual ~SaldoNaoDisponivelException() throw();
    //Metodo
        virtual std::string what();

    protected:
        std::string erro = "Saldo indisponivel";
};

#endif // SALDONAODISPONIVELEXCEPTION_H
