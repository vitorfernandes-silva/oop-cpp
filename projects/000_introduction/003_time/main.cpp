#include "time.h"
#include <iostream>

using namespace std;

int main(){
  Time standard;
  Time custom(11,20,36);

  cout << "Standard hour: ";
  standard.print();

  cout << "\nHour customized: ";
  custom.print();

  standard.setTime(110, 25, 70);
  cout << "\nUpdated standard hour: ";
  standard.print();


  return 0;
}