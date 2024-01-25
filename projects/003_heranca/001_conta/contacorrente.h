#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "conta.h"

class ContaCorrente : public Conta
{
  private:
    float taxa;
  public:
    ContaCorrente(float, float);
    ~ContaCorrente(){}
    void debitar(float);
    void creditar(float);
    void print() const;
};

// Implementação dos métodos
ContaCorrente::ContaCorrente(float s, float t) : Conta{s}, taxa{t}{}

void ContaCorrente::print() const
{
  Conta::print();
  cout << "Taxa/transacao = " << taxa << "%" << endl;
}

void ContaCorrente::debitar(float value)
{
  if(saldo > value)
    saldo = saldo - value;
  else
    cout << "ERRO: Saldo da sua Conta Corrente é insuficiente para debitar!" << endl;
}

void ContaCorrente::creditar(float value)
{
  if(saldo > value)
    saldo = saldo - value;
  else
    cout << "ERRO: Saldo da sua Conta Corrente é insuficiente para creditar!" << endl;
}

#endif