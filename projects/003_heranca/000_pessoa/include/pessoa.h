#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa 
{
    protected: // Comando que abre excessão para as classes derivadas de Pessoa
        string nome;
        string endereco;
    public:
        Pessoa(string, string);
        ~Pessoa(){}
        void setEndereço(string);
        void imprime();
};


#endif