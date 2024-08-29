#include<bits/stdc++.h>
using namespace std; 

int ** fun(){       // pointer er address / pointer er pointer return krse , tai 2ta * .
    int *a= new int ;  // create dynamic memory // *a = static memory te ase
    cout<< "Fun(): &a: " << &a << endl ;     

    *a =100 ;                           // Dereference
    return &a ;                          // return &a and static *a  Delete hoye jabe
                                        // dynamic memory delete hobena
}

int main(){
    int **p = fun() ;                   // receive The ADDRESS of *a
                                       // *a er Address *p te ase
                                       // *a Delete hoye gese
    cout<< "main(): " << p << endl ;   // so *p kaoke point kore nei // 0 dekhabe
    //cout<< "main(): " << *p << endl ;   // segmentation fault
    
    cout<< "main() &p: " << &p << endl ; 

}