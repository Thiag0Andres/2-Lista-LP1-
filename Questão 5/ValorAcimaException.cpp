#include "ValorAcimaException.h"

ValorAcimaException::ValorAcimaException() throw(){
    //ctor
}

ValorAcimaException::~ValorAcimaException() throw(){
    //dtor
}

string ValorAcimaException::what(){
	return erro;
}
