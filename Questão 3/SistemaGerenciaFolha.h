#ifndef SISTEMA_H
#define SISTEMA_H

#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"
#include "Funcionario.h"

class SistemaGerenciaFolha {
    public:
    //Construtor
        SistemaGerenciaFolha();
    //Metodo set
        void setFuncionarios(Funcionario *func);
    //Metodos
        double calculaValorTotalDaFolha();
        double consultaSalarioFuncionario(std::string nome);
    private:
        Funcionario * funcionarios[3];
        int a = 0;
};

#endif // SISTEMA_H

