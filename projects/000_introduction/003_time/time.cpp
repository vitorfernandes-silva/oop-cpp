#include "time.h"
#include <iostream>

using namespace std;

Time::Time(){
  hour = 0;
  second = 0;
  minute = 0;
}

Time::Time(int h, int m, int s){
  setTime(h, m, s);
}

void Time::setTime(int h, int m, int s){
  if(h >= 0 && h <=23)  
    hour = h;
  else
    hour = 0;
  if(m >= 0 && m <= 59)
    minute = m;
  else
    minute = 0;
  if(s >= 0 && s <= 59)
    second = s;
  else
    second = 0;
}

void Time::print(){
  cout << hour << ":" << minute << ":" << second << endl;
}