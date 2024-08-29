#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Person(string nm, int ag, int m1, int m2){
            name= nm ;
            age = ag ;
            marks1 = m1 ;
            marks2 = m2 ;
        }

        void hello(){
            cout<< name << " " << age << endl ;
        }

        void sum_marks(){
            cout<< marks1+ marks2 << endl ;
        }

};

int main(){
    Person rakib("Rakib Ahasan", 11, 95,85 ) ;
    cout<< rakib.name << endl ;
    
    rakib.hello() ;
    rakib.sum_marks() ;
    

    return 0 ;
}