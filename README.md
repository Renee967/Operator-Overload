# Operator-Overload

To implement function overloading for a given class.
Instructions
Given the class definition below:

1. Overload the + operator to be able to add 2 objects of type Time.

2. Overload the < operator using a friend function to compare 2 objects of type Time.

3. Overload the == operator using a member function to compare 2 objects of type Time.

4. Create 2 objects in the main and test all 3 functions in the main.

 

class Time{

private:

    int hours;

    int minutes;

public:

    Time(int h, int m): hours(h), minutes(m){}

    void Display();   

};

void Time::Display(){

    cout<<"Time is: "<<hours<<" and="" "<<minutes<<endl;

}
