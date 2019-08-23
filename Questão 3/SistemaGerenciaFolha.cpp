#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(){}

void SistemaGerenciaFolha::setFuncionarios(Funcionario * func) {
	funcionarios[a] = func;
	a++;
}

double SistemaGerenciaFolha::calculaValorTotalDaFolha() {
	double valorTotal = 0;

	for (int i = 0; i < 3; i++) {
		valorTotal += funcionarios[i]->calcularSalario();
	}

	return valorTotal;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome) {
	for (int i = 0; i < 3; i++) {
		if (nome == funcionarios[i]->getNome())
			return funcionarios[i]->calcularSalario();
	}

	return -1;
}
