#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>
using namespace std;

class Complexo
{
    private:
        double re,im;
    public:
        Complexo (double = 0, double = 0); // Construtor
        ~Complexo (){} // Destrutor
        double get_real() {return re;}
        double get_imag() {return im;}

        // Definindo Operadores
        Complexo operator+(Complexo&);
        Complexo operator-(Complexo&);
        friend void print(const Complexo&);

};

#endif

// Construtor 
Complexo::Complexo (double r, double i) : re{r}, im{i}{}

// Sobrecarga de Operadores
// Soma
Complexo Complexo::operator+(Complexo& c){
    double r, i;
    r = re + c.get_real();
    i = im + c.get_imag();

    return Complexo{r,i};
}

// Subtração
Complexo Complexo::operator-(Complexo& c){
    double r, i;
    r = re - c.get_real();
    i = im - c.get_imag();

    return Complexo{r,i};
}

void print(const Complexo& c){
    cout << c.re << "+ (" << c.im << ")i";
}

int main()
{
    Complexo a{10,0};
    Complexo b{10,15};

    a = a + b; // Notação direta e simples
    //a = a.operator+(b); // Notação Explícita funcional
    b = b - a; // Representação Aritmética comum

    cout << "Numeros criados: \n";
    print(a);
    cout << endl;
    print(b);

    return 0;
}