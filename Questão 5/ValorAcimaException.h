#ifndef VALORACIMAEXCEPTION_H_INCLUDED
#define VALORACIMAEXCEPTION_H_INCLUDED

#include <iostream>
#include <exception>

using namespace std;

class ValorAcimaException : public exception{
    public:
    //Construtor
        ValorAcimaException() throw();
    //Destrutor
        virtual ~ValorAcimaException() throw();
    //Metodo Virtual
        virtual string what();
	protected:
        string erro = "Valor acima do permitido";
};

#endif // VALORACIMAEXCEPTION_H_INCLUDED

