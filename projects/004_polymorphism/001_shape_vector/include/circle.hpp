#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape {
  private:
    double r;
  public:
    Circle(double, double, double);
    ~Circle(){}
    double area();
    void print();
};

#endif