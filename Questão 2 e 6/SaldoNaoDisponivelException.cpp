#include "SaldoNaoDisponivelException.h"

SaldoNaoDisponivelException::SaldoNaoDisponivelException() throw()
{
    //ctor
}

SaldoNaoDisponivelException::~SaldoNaoDisponivelException() throw()
{
    //dtor
}

std::string SaldoNaoDisponivelException::what(){
    return erro;
}

