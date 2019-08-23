#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"


class Assalariado : public Funcionario
{
    public:
    //Construtores
        Assalariado();
        Assalariado(std::string nome, double salario);
    //Destrutor
        virtual ~Assalariado();
    //Metodo
        double calcularSalario();

    private:
        double salario;
};

#endif // ASSALARIADO_H
