#include "complexo.h"
#include <iostream>

using namespace std;

    Complexo::Complexo (float r, float i){
        re = r;
        im = i;
    }

    // Interface
    void Complexo::print(){
        cout << re << "+ (" << im << ")i";
    }

    Complexo Complexo::add(Complexo& par){

        float x = this->re + par.re;
        float y = this->im + par.im;

        return Complexo {x,y};
    }
    Complexo Complexo::sub(Complexo& par){
        float x = this->re - par.re;
        float y = this->im - par.im;

        return Complexo {x,y};
    }

    // Sobrecarga de Operadores

    Complexo Complexo::operator+ (Complexo& par){
        float x = this->re + par.re;
        float y = this->im + par.im;

        return Complexo {x,y};
    }

    Complexo Complexo::operator- (Complexo& par){
        float x = this->re - par.re;
        float y = this->im - par.im;

        return Complexo {x,y};
    }

    bool Complexo::operator!(){
        if(re == 0 && im == 0) return true;
        else return false;
    }

    Complexo& Complexo::operator++(){
        this->re = this->re + 1;
        this->im = this->im + 1;
        return *this;
    }

    Complexo Complexo::operator++(int value){
        Complexo temp = *this;
        this->re = this->re + 1;
        this->im = this->im + 1;
        return temp;
    }

int main(){

    Complexo n1 {10,20};
    Complexo n2 {5,15};

    cout << "n1 = ";
    n1.print();
    cout << endl;

    cout << "n2 = ";
    n2.print();
    cout << endl;

    Complexo n3,n4;

    if (!n3 && !n4)
        cout << "n3 e n4 inicialmente iguais a 0.0" << endl;

    n3 = n1 + n2; // n3 = n1 + n2;
    n4 = n1 - n2; // n4 = n1 - n2

    cout << "n3 (add) = ";
    n3.print();
    cout << endl;

    cout << "n4 (sub) = ";
    n4.print();
    cout << endl;

    n1 = n2++;
    cout << "Depois do incremento\n";

    cout << "n1 = ";
    n1.print();
    cout << endl;

    cout << "n2 = ";
    n2.print();
    cout << endl;

    return 0;
}