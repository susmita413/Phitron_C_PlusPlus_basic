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

Student fun(){
    Student rohim (34,6,2.67);      // 'rohim' creates instance or copy of the class by using 
                                    // parameterized constructor. 
    return rohim ;

}


int main(){
    
    Student ans = fun() ;
    cout << ans.roll << " " << ans.cls << " " << ans.gpa << endl; 

    return 0 ;
}