#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        int roll ;
        int cls;
        double gpa ;
        // Parameterized constructor to initialize the data members
        Student(int roll, int cls, double gpa){  
            // roll =roll ;  // error
            // cls = cls ;
            // gpa = gpa ;

            (*this).roll =roll ;  // object er 'Student' copy = parameter theke paoa value
            (*this).cls = cls;
            (*this).gpa = gpa ;

            // this->roll = roll ;      // uporertar Shortcut 
            // this->cls = cls ;
            // this->gpa = gpa ; 
        }

};


int main(){
    Student rahim (29,9,3.03);      // 'rahim' creates instance or copy of the class by using 
                                    // parameterized constructor. 
    Student karim (45,10, 4.11) ;   // thus, Here 2 'Student' objects are created

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl; 
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;


    return 0 ;
}