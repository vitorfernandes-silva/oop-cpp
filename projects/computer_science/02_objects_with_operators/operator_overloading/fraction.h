#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

using namespace std;


class Fraction{

    private:
    int num;
    int den;

    public:
    Fraction(int n = 0, int d = 1){
        set_den(d);
        set_num(n);
    }

    void set_num(int n){
        num = n;
    }
    
    void set_den(int d){
        den = d;
    }

    int get_num()const{
        return num;
    }

    int get_den()const{
        return den;
    }

    void print()const{
        cout << get_num() << "/" << get_den() << endl;
    }

    // Operator overloading using an integer
    Fraction operator*(int x){ 

        return Fraction(this->num * x, this->den);
    }
    // Operator overloading between two objects of the same class
    Fraction operator*(Fraction FD){

        return Fraction(this->num * FD.num,this->den * FD.den);
    }

    friend Fraction operator*(int i, Fraction f);


    // Operator Overloading prefix
    Fraction operator++(){
        num = num + den;
        return *this;
    }

    // Operator Overloading postfix
    Fraction operator++(int){
        Fraction CopyPrevIncrement = *this;
        num = num + den;
        return CopyPrevIncrement;
    }

};

#endif