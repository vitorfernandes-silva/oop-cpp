#include "../include/shape.hpp"
#include "../include/rectangle.hpp"
#include "../include/circle.hpp"
#include <iostream>
using namespace std;

int main(){
  Shape* shape_vector[3];
  shape_vector[0] = new Rectangle{3,5,10,50};
  shape_vector[1] = new Rectangle{3,5,10,50};
  shape_vector[2] = new Circle{0,0, 25.75};

  for(auto x : shape_vector){
    cout << "--- Shape ---" << endl;
    x->print();
    cout << endl;
  }

  return 0;
}