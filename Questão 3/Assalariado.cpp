#include "Assalariado.h"

Assalariado::Assalariado(){
    //ctor
}

Assalariado::Assalariado(std::string nome, double salario){
    this->nome = nome;
	this->salario = salario;
}

Assalariado::~Assalariado(){
    //dtor
}

double Assalariado::calcularSalario(){
    return salario;
}


