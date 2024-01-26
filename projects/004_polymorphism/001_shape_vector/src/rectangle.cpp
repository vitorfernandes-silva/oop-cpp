#include "../include/rectangle.hpp"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double _x, double _y, double _b, double _h) 
  : Shape{_x,_y}, b{_b}, h{_h}{}

double Rectangle::area() {
  return b*h;
}
void Rectangle::print() {
  cout << " Rectangle" << endl;
  Shape::print();
  cout << "Base = " << b << " and height = " << h << endl;
  cout << "Area = " << area() << endl;
}