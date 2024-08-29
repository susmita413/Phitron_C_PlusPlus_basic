#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[5] = {6,7,8,9,10} ;
                               // after some line of code , I need same array with size 8
                               // what should I do?
    int ar_new[8] ;            // 1. declaire another new array with size 8
                               // 2. copy all value from OLD array to New array
    for(int i=0; i<8; i++) 
        ar_new[i] = ar[i] ;

    ar_new[5] = 40;            // 3. give extre value of new array
    ar_new[6] = 50; 
    ar_new[7] = 60; 

    for(int i=0; i<8; i++) 
        cout<< ar_new[i] << " " ;

    return 0 ;          // But Now, The Old Array is a wastage of memory , which has no need
                        // it is the disadvantage of static array .
}