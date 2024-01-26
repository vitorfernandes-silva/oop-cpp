#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.hpp"

class Rectangle : public Shape {
  private:
    double b, h;
  public:
    Rectangle(double, double, double ,double); // x, y, b, h
    ~Rectangle(){}
    
    void print();
    double area();
};

#endif