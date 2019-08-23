#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario
{
    public:
    //Construtores
        Horista();
        Horista(std::string nome, double valorPorHora, double horasTrabalhadas);
    //Destrutor
        virtual ~Horista();
    //Metodo
         double calcularSalario();

    private:
        double valorPorHora;
        int horasTrabalhadas;
};

#endif // HORISTA_H
