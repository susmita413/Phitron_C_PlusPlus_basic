#include<bits/stdc++.h>
using namespace std; 


int main(){
    int *a = new int ;  
    *a = 120 ;
    int **p = &a ;
    int ***q= &p ;                 
    cout<<"*a : " << *a << endl ;
    cout<<"**p : " << **p << endl ;  
    cout<<"***q : " << ***q << endl ;


}