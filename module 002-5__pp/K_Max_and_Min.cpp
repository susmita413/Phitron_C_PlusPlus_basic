// Given 3 numbers A, B and C, 
// Print the minimum and the maximum numbers.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c ;
    cin >>a >> b >> c ;
    cout << min({a,b,c}) <<" " <<max({a,b,c});

    return 0 ;
}