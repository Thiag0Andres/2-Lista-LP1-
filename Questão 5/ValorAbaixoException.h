#ifndef VALORABAIXOEXCEPTION_H_INCLUDED
#define VALORABAIXOEXCEPTION_H_INCLUDED

#include <iostream>
#include <exception>

using namespace std;

class ValorAbaixoException : public std::exception{
    public:
    //Construtor
        ValorAbaixoException() throw();
    //Destrutor
        virtual ~ValorAbaixoException() throw();
    //Metodo Virtual
        virtual string what();
	protected:
        std::string erro = "valor muito baixo";
};

#endif // VALORABAIXOEXCEPTION_H_INCLUDED

