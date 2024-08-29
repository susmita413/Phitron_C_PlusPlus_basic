#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string name, int age){  // constructor
            this->name = name ;
            this->age = age ;
        }
        void hello(){                  // function
            cout<< "hello " << name ;
        } 
};

int main(){
    Person *susmi= new Person("Susmita Paul Susmi", 22) ;
    Person *arpi= new Person("Arpita Paul Misty", 18) ;

    //arpi = susmi ;  // jodi 'susmi' object delete kori , 
                      // then, segmentation fault dibe
    // 1                  
    // arpi->name = susmi->name ;  // manually diya jai
    // arpi->age = susmi->age ;

    //2
    *arpi = *susmi ;               // or, dereference kora jai

    delete susmi ;
    cout << arpi->name << " " << arpi->age << endl ;
    arpi->hello() ;

    return 0 ;
}