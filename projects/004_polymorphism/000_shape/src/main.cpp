#include "../include/shape.hpp"
#include "../include/rectangle.hpp"
#include "../include/circle.hpp"
#include <iostream>
using namespace std;

int main(){
  cout << "Shape: " << endl;
  Shape* p1 = new Shape {10.0,20.0};
  p1->print();
  cout << "Area = " << p1->area() << endl;

  cout << "\nRectangle: " << endl;
  Shape* p2 = new Rectangle {0,0,10,50};
  p2->print();

  cout << "\nCircle: " << endl;
  Shape* p3 = new Circle {0,0,10};
  p3->print();

  return 0;
}