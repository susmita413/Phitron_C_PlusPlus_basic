#include<bits/stdc++.h>
using namespace std;

class Person{
   public:
        string name;
        int age;
        Person(string name, int age){
            (*this).name = name ;  // this->name = name ;
            (*this).age = age;     // this->age = age ;
        }

        void hello(){
            cout<< "hello" << endl ;
        }

};

int main(){
    Person rakib("Susmita paul", 25) ;
    cout<< rakib.name <<" " << rakib.age << endl ;   
    rakib.hello() ;
    

    return 0 ;
}