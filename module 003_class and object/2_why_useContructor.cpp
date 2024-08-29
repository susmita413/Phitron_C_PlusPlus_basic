#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
};
int main()
{
    Student rahim;         // অবজেক্ট ডিক্লেয়ার করা হয়েছে। 
    rahim.roll = 29;     // অবজেক্টের ভেলু এসাইন করে দেওয়া হয়েছে।
    rahim.cls = 9;
    rahim.gpa = 5.00;

    Student karim;         // আরেকটি অবজেক্ট ডিক্লেয়ার করা হয়েছে। 
    karim.roll = 45;     // অবজেক্টের ভেলু এসাইন করে দেওয়া হয়েছে।
    karim.cls = 10;
    karim.gpa = 4.33;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;   // প্রথম অবজেক্ট প্রিন্ট করা হয়েছে। 
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;   // দ্বিতীয় অবজেক্ট প্রিন্ট করা হয়েছে।
    return 0;
}

/* Constructors allow you to initialize the data members of a class with specific 
values when an object is created. 
This ensures that the object is in a valid state from the moment it is created.
*/
/* If there were many(suppose 10) class variables, initializing would take a 
lot of time and lines , Which is difficult.
So we can finish this task in one line by using constructor
*/