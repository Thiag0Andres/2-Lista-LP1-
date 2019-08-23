#include "Comissionado.h"

Comissionado::Comissionado(){
    //ctor
}

Comissionado::Comissionado(std::string nome, double vendasSemanais, double percentual, double salario){
    this->nome = nome;
	this->vendasSemanais = vendasSemanais;
	this->percentual = percentual;
	this->salario = salario;
}

Comissionado::~Comissionado(){
    //dtor
}

double Comissionado::calcularSalario(){
    return (salario + ((vendasSemanais * 4) * percentual));
}



