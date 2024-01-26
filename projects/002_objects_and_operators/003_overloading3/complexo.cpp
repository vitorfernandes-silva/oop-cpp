#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>
#include <cmath>
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
        Complexo operator-(Complexo&);
        operator int();
        friend Complexo operator+(Complexo&, Complexo&);
        friend ostream& operator<<(ostream&, const Complexo&);
        friend istream& operator>>(istream&, Complexo&);

};

#endif

// Construtor 
Complexo::Complexo (double r, double i) : re{r}, im{i}{}

// Sobrecarga de Operadores
// Soma
Complexo operator+(Complexo& c1, Complexo& c2){
    double r, i;
    r = c1.re + c2.re;
    i = c1.im + c2.im;

    return Complexo{r,i};
}

// Subtração
Complexo Complexo::operator-(Complexo& c){
    double r, i;
    r = re - c.get_real();
    i = im - c.get_imag();

    return Complexo{r,i};
}

ostream& operator<<(ostream& out, const Complexo& c){
    out << c.re << "+ (" << c.im << ")i";
    return out;
}

istream& operator>>(istream& in, Complexo& c){
    in >> c.re >> c.im;
    return in;
}

Complexo::operator int(){
    return sqrt(re*re + im*im);
}

int main()
{
    Complexo a, b;

    cout << "Entre com o complexo a: ";
    cin >> a;
    cout << "Entre com o complexo b: ";
    cin >> b;

    //a = a + b;
    //b = b - a;
    
    cout << "Numeros criados: \n";
    cout << a << " e " << b << endl;

    cout << "Convertidos para inteiro: \n";
    cout << (int) a << " e " << (int) b;

    return 0;
}