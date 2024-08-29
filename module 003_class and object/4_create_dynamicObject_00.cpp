#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        int roll ;
        int cls;
        double gpa ;
        // Parameterized constructor to initialize the data members
        Student(int roll, int cls, double gpa){  
            this->roll = roll ;   // object er 'Student' copy = parameter theke paoa value
            this->cls = cls ;
            this->gpa = gpa ; 
        }
};


int main(){
    
    //new Student(342,6, 4.78) ; // dynamic object          
    Student *rohim = new Student(342,6, 4.78);    // 'Student' type pointer er moddhe 
                                                  // dynamic object tar Address rakha holo
    cout<< (*rohim).roll <<" " << (*rohim).cls <<" "<< (*rohim).gpa << endl ;
    cout << rohim->roll << " " << rohim->cls << " " << rohim->gpa << endl;  // or

                                // pointer object er class variable gula Access korese
    return 0 ;
}
