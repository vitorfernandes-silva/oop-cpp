#ifndef CONTA_H
#define CONTA_H

#include <iostream>
using namespace std;

class Conta
{
  protected:
    float saldo;
  public:
    Conta(float);
    ~Conta(){}

    float getSaldo() const;
    void setSaldo(float);
    void debitar(float);
    void creditar(float);
    void print() const;
};

// Implementação dos métodos
Conta::Conta(float s) : saldo{s}{}

float Conta::getSaldo() const
{
  return saldo;
}

void Conta::setSaldo(float novo_saldo)
{
  saldo = novo_saldo;
}

void Conta::print() const
{
  cout << "O seu saldo atual eh = R$" << saldo << endl;
}

void Conta::debitar(float value_d)
{
  if(value_d > 0)
    saldo = saldo + value_d;
  else
    cout << "ERRO: Insira algum valor valido para debitar" << endl;
}

void Conta::creditar(float value_c)
{
  if(saldo > value_c)
    saldo = saldo - value_c;
  else
    cout << "ERRO: Saldo insuficiente para creditar este valor" << endl;
}

#endif