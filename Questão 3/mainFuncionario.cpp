/*
    Thiago Andres Paiva Palacios
    Questao 3
*/

#include "SistemaGerenciaFolha.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	Funcionario * f1 = new Assalariado("Pedro", 1200);
	Funcionario * f2 = new Comissionado("Marcos", 20, 0.25, 800);
	Funcionario * f3 = new Horista("Gabi", 12, 200);
	SistemaGerenciaFolha folha = SistemaGerenciaFolha();

	folha.setFuncionarios(f1);
	folha.setFuncionarios(f2);
	folha.setFuncionarios(f3);

	cout << "O valor total da folha eh " << folha.calculaValorTotalDaFolha() << endl;

	double b;
	b = folha.consultaSalarioFuncionario("Gabi");

	if (b != -1) {
		cout << "O salario de Gabi eh " << folha.consultaSalarioFuncionario("Gabi") << endl;
	}
	else {
		cout << "Funcionario nao encontrado" << endl;
	}

    return 0;
}
