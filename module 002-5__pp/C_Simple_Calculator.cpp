// Given two numbers X and Y. 
// Print the summation and multiplication and subtraction of these 2 numbers.


#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int x,y ;
    cin>> x>> y ;
    cout <<x <<" + " <<y <<" = " << x+y << endl ;

    //long long int mult = x* y ;
    cout <<x <<" * " <<y <<" = " << x* y << endl ;
    cout <<x <<" - " <<y <<" = " << x-y << endl ;

    return 0 ;
}