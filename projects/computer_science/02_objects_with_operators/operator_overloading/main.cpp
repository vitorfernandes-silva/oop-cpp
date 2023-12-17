#include <iostream>
#include "fraction.h"

using namespace std;

   // Fraction operator*(int i, Fraction f){
     //   return (i * f);
    //}

int main(){

    Fraction f1(5,2);
    Fraction f2(3,2);

    f1.print();
    f2.print();

    // Operator overloading between two objects of the same class
    Fraction f3 = f1 * f2;
    f3.print();

    // Operator overloading using an integer
    Fraction f4 = f3 * 7;
    f4.print();

    //Fraction f5 = 3 * f4;
  //  f5.print();

    return 0;
}