// Nome do arquivo: main.cpp
// Autor: Vitor Fernandes Silva
// Data: 12-01-2024
/* Descrição do exercício: 
    Um número complexo pode ser escrito da forma z = a + bi, onde a e b são números reais e i é a unidade imaginária. Crie uma classe para números complexos  com todos os métodos necessários para seu bom funcionamento. 

    Faça a sobrecarga dos seguintes operadores: +, -,*,  ++ (pré e pós fixado), -- (pré e pós fixado), << (saída) e  >> (entrada). 

    As operações de adição/subtração/multiplicação devem ser comutativas (pode ser realizada com outro objeto do mesmo tipo (número complexo) e com números reais, em qualquer ordem). 

    Mostre a utilização da classe e dos operadores sobrecarregados em um programa principal.
*/ 
// Dependências: complexo.h
#include "complexo.h"
#include <iostream>

using namespace std;

Complexo::Complexo(float r, float i){
    re = r;
    im = i;
}

void Complexo::print(){
    cout << re << " + (" << im << ")i";
}

Complexo Complexo::operator+(Complexo& par){
    float x = this->re + par.re;
    float y = this->im + par.im;

    return Complexo {x,y};
}

Complexo Complexo::operator-(Complexo& par){
    float x = this->re - par.re;
    float y = this->im - par.im;

    return Complexo {x,y};
}

Complexo Complexo::operator*(Complexo& par){
    float x = this->re * par.re;
    float y = this->im * par.im;

    return Complexo {x,y};
}

Complexo& Complexo::operator++(){
    this->re = this->re + 1;
    this->im = this->im + 1;

    return *this;
}

Complexo Complexo::operator++(int){
    Complexo temp = *this;
    this->re = this->re +1;
    this->im = this->im +1;

    return temp;
}

int main(){

    Complexo a{10,0};
    Complexo b{10,15};


    cout << "n1 = ";
    a.print();
    cout << endl;
    b = ++a;

    cout << "n2 = ";
    b.print();
    cout << endl;


    return 0;
}