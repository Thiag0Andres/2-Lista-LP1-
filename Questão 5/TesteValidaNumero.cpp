#include "TesteValidaNumero.h"

using namespace std;

TesteValidaNumero::TesteValidaNumero(){
    //ctor
}

void TesteValidaNumero::validaNumero(int num){
	if (num <= 0) {
		throw ValorAbaixoException();
	}
	else if (num > 100 && num < 1000){
		throw ValorAcimaException();
	}
	else if (num >= 1000){
		throw ValorMuitoAcima();
	}
}
