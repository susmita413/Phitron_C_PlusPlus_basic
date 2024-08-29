#include<bits/stdc++.h>
using namespace std;

int main(){
    int *a = new int[3] ;
    for(int i=0 ; i<3; i++){       // Input
        cin >> a[i] ;              // 45 78 -60
    }

    for(int i=0 ; i<3; i++){      // output
        cout<< a[i] <<" " ;      // 
    }

    cout<< endl ;

    delete[] a;                 // delete dynamic array 
                                // but static pointer 'a' will not be deleted.

    for(int i=0 ; i<3; i++){      // output
        cout<< a[i] <<" " ;      // 16326832 16318656 -60  ->GARBAGE
    }                    
          // dynamic memory delete kora hoyese bole grabage dekhasche
          // last index er value ekhono Delete hoini dekhe thikmoto show korese
          // run korar time er cheye, delete hote beshi time lagse.





    return 0 ;
}