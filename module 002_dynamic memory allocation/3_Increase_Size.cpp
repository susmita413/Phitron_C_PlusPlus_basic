// Increase size of Dynamic Array
// copy-> delete-> increase -> again copy ->delete

#include<bits/stdc++.h>
using namespace std;

int main(){
    int *a = new int[3] ;  //Main dynamic array
    int *b = new int[3] ;  // this 2nd dynamic array will help for copying and 
                           // increasing the size 

    for(int i=0 ; i<3; i++){       // Input
        cin >> a[i] ;             // 40 50 60 
        b[i] = a[i] ;             // copy all value from *a  //address copy hobena
    }

    for(int i=0 ; i<3; i++)      // output
        cout<< a[i] <<" " ;      // 
    

    cout<< endl ;

    delete[] a;                 // delete dynamic array 
                                // but static pointer 'a' will not be deleted.
    a = new int[7] ;            // Now create new dynamic array in pointer 'a' .
                                // And Increase the size

    for(int i=0 ; i<3; i++)
        a[i] = b[i] ;

    delete[] b;                // 2nd dynamic array er kaj shesh tai delete kore dibo

    a[3] = -200 ;
    a[4] = 90;
    a[5] = 91 ;
    a[6] = 92 ;

    cout<< "After increasing size:" << endl ;
    for(int i=0 ; i<7; i++)      
        cout<< a[i] <<" " ;                  //Output:  40 50 60 -200 90 91 92 

    return 0 ;
}