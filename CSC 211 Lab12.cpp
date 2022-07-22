/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;



class Time {

private:

  int hours;

  int minutes;

public:

  Time(int h, int m) : hours(h), minutes(m) {}

  void Display();

  bool operator== ( const Time& t2);

  friend bool operator< (const Time& t1, const Time& t2)

  {

    if (t1.hours < t2.hours)

    {

      return true;

    }

    else if (t1.hours == t2.hours && t1.minutes < t2.minutes)

    {

      return true;

    }

    else

    {

      return false;

    }

  }

  friend Time operator+(const Time& t2, const Time& t3);

};

Time operator+(const Time& t2, const Time& t3)

{

  Time t1(0, 0);

  t1.hours = t2.hours + t3.hours;

  t1.minutes = t2.minutes + t3.minutes;

  return t1;

}



void Time::Display() {



  cout << "Time is: " << hours << " and="" " << minutes << endl;

}

bool Time::operator== (const Time& t2)

{

  return (this->hours == t2.hours && this->minutes == t2.minutes);

}



int main()

{

  Time t1(0,0), t2(3,3), t3(5,25);

  Time t4 = t2 + t3;

  cout << (t1 == t2) << endl;

  cout << (t1 < t2) << endl;

  t1.Display();

  t2.Display();

  t3.Display();

  t4.Display();

  return 0;



}

