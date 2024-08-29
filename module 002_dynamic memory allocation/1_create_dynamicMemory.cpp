#include<bits/stdc++.h>
using namespace std; 

int * fun(){
    int *a= new int ;  // create dynamic memory
    cout<< "Fun(): &a: " << &a << endl ; // pointer(*)a er ADDRESS print hobe
    cout<< "Fun(): " << a << endl ;      // *a jake POINT kore ase tar ADDRESS print hobe

    *a =100 ;                           // Dereference
    return a ;                          // return *a and Delete static *a 
                                        // dynamic memory delete hobena
}

int main(){
    int *p = fun() ;                   // receive The ADDRESS of Dynamic memory
                                       // Now, oi dynamic memory ba variable tar address *p te ase
    cout<< "main(): " << p << endl ;   // *p jake POINT kore ase tar ADDRESS print hobe
    cout<< "main(): " << *p << endl ;  // *p jake POINT kore ase tar VALUE print hobe
    
    cout<< "main() &p: " << &p << endl ; // pointer(*)p er ADDRESS print hobe
    
}