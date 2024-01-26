#ifndef SHAPE_H
#define SHAPE_H

class Shape {
  protected:
    double x, y;
  public:
    Shape(double = 0, double = 0);
    virtual ~Shape(){}
    virtual void print(); // enable polymorphism
    virtual double area() = 0; // enable polymorphism
};

#endif