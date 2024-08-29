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

Student* fun(){
    Student *rohim = new Student(342,6, 4.78);    // 'Student' type pointer er moddhe 
                                                  // dynamic object tar Address rakha holo
    return rohim ;          // rohim pointer return krsi, 
}
                            //'rohim' pointer delete hoye jabe ,
                            // BUT Dynamic Object delete hobena .

int main(){
    
    Student *ans = fun() ;          // receives the address of dynamic object

    cout<< (*ans).roll << " " << (*ans).cls << " " << (*ans).gpa << endl;  //or,
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;     

    
    delete ans ;                     // dynamic object delete kore dibe.
    cout <<"after delete: "<< ans->roll << " " << ans->cls << " " << ans->gpa << endl; 
                                     // GARBAGE DEKHABE

    return 0 ;
}
