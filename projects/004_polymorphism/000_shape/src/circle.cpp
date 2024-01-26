#include "../include/circle.hpp"
#include <iostream>

using namespace std;

Circle::Circle(double _x, double _y, double _r)
  : Shape{_x,_y}, r{_r}{}

double Circle::area(){
  return 3.141592*r*r;
}

void Circle::print(){
  Shape::print();
  cout << "Radius = " << r << endl;
  cout << "Area = " << area() << endl; 
}