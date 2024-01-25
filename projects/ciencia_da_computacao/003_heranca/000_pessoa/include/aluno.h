#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

class Aluno : public Pessoa // Definindo a classe Aluno derivada de Pessoa
{
    private:
        string curso;
        int matricula;
    public:
        Aluno(string, string, string, int); // nome, endereco, curso e matricula
        ~Aluno(){}
        void setCurso(string);
        void imprime();
};

#endif