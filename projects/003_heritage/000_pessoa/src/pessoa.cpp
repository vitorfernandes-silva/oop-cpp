#include "../include/pessoa.h"
#include <string>
#include <iostream>
using namespace std;

// Implementação dos métodos da Classe Pessoa
Pessoa::Pessoa(string n, string e) : nome{n}, endereco{e}{}

void Pessoa::setEndereço(string e)
{
    endereco = e;
}

void Pessoa::imprime()
{
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;
}

// Fim das Implementações