// Nome do arquivo: main.cpp
// Autor: Vitor Fernandes Silva
// Data: 12-01-2024
/* Descrição do exercício: 
    Um número complexo pode ser escrito da forma z = a + bi, onde a e b são números reais e i é a unidade imaginária. Crie uma classe para números complexos  com todos os métodos necessários para seu bom funcionamento. 

    Faça a sobrecarga dos seguintes operadores: +, -,*,  ++ (pré e pós fixado), -- (pré e pós fixado), << (saída) e  >> (entrada). 

    As operações de adição/subtração/multiplicação devem ser comutativas (pode ser realizada com outro objeto do mesmo tipo (número complexo) e com números reais, em qualquer ordem). 

    Mostre a utilização da classe e dos operadores sobrecarregados em um programa principal.
*/ 

#ifndef COMPLEXO_H
#define COMPLEXO_H


class Complexo {
  private:
    float re, im;
  public:
    Complexo(float = 0.0, float = 0.0);
    ~Complexo(){}

  // Interface
  void print();
  double get_real();
  double get_imag();

  // Sobrecarga de Operadores
  Complexo operator+(Complexo&); // Adição
  Complexo operator-(Complexo&); // Subtração
  Complexo operator*(Complexo &); // Multiplicação
  Complexo& operator++(); // Incremento Pré-Fixado
  Complexo operator++(int); // Incremento Pós-Fixado
};

#endif