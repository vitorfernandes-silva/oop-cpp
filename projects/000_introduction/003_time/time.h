#ifndef TIME_H
#define TIME_H

class Time{
  private:
    int hour, minute, second;
  public:
    Time(); // Constructor Default
    Time(int, int, int);
    void setTime(int, int, int);
    void print();
    ~Time(){}
};

#endif