#include<bits/stdc++.h>
using namespace std; 



int main(){
    int a[5] ;  //static array 
    new int[5] ; // create dynamic array , but it returns the address of index0,
                 // which is not stored .

    int *ar = new int [5] ; // the address of index0 is stored in pointer 'ar'
 
    for(int i=0 ; i<5; i++){       // Input
        cin >> ar[i] ;             // 3 4 5 6 7 
    }

    for(int i=0 ; i<5; i++){      // output
        cout<< ar[i] <<" " ;      // 3 4 5 6 7 
    }
 

}