#include<bits/stdc++.h>
using namespace std;

int main(){
    // Dynamically allocate memory for an integer and assign its address to pointer 'a'
    int *a = new int ;    
    
    // Assign the value 10 to the allocated memory by dereferencing the pointer 'a'
    *a =10 ;              
    
    cout<< a << endl ;    // Print the address stored in pointer 'a'
    cout<< *a << endl ;   // Print the value at the address stored in pointer 'a', which is 10

    
    // Deallocate the memory pointed to by 'a'. Now 'a' is a dangling pointer.
    delete a ;            // delete  dynamic variable
                          // *a er address delete hoini , sudhu dynamic part ta delete hoyese
                          

    cout<< a << endl ;    // Print the address stored in pointer 'a',
                          //  which is still the same as before deallocation
    cout<< *a << endl<< endl ;   // garbage , *a jake point kore ase, seta ekhn blank 

    float *s = new float ;
    *s = 1.534578 ;
    cout << s << endl ;         // Print the address stored in pointer 's'
                                // it can be same address if previous address is reused.
    cout << *s << endl ;

    return 0 ;
}