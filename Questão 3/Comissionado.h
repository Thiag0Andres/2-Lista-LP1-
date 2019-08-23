#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario
{
    public:
    //Construtores
        Comissionado();
        Comissionado(std::string nome, double vendasSemanais, double percentual, double salario);
    //Destrutor
        virtual ~Comissionado();
    //Metodo
        double calcularSalario();

    private:
        double vendasSemanais;
        double percentual;
        double salario;
};

#endif // COMISSIONADO_H
