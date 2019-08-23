#include "Horista.h"

Horista::Horista(){
    //ctor
}

Horista::Horista(std::string nome, double valorPorHora, double horasTrabalhadas){

}

Horista::~Horista(){
    //dtor
}

double Horista::calcularSalario(){
    if (horasTrabalhadas <= 40){
        return (valorPorHora * horasTrabalhadas);
	}
	else{
		return (40 * valorPorHora + ((horasTrabalhadas - 40) * (1.5 * valorPorHora)));
	}
}

