#include "../include/shape.hpp"
#include <iostream>
using namespace std;

Shape::Shape(double _x, double _y) : x{_x}, y{_y}{}

void Shape::print() {
  cout << "Origin: (" << x << "," << y << ")" << endl;
}