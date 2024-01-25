#ifndef POUPANCA_H
#define POUPANCA_H

#include "conta.h"

class Poupanca : public Conta 
{
  private:
    float juros;
  public:
    Poupanca(float, float);
    ~Poupanca(){}
    float getJuros() const;
    void print() const;
};

// Implementação dos métodos
Poupanca::Poupanca(float s, float j) : Conta{s}, juros{j}{}

float Poupanca::getJuros() const
{
  return juros;
}
void Poupanca::print() const
{
  Conta::print();
  cout << "Juros = " << juros << "%" << endl;
}

#endif