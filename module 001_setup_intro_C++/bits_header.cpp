#include<bits/stdc++.h>
//#include<iostream>
//#include <algorithm>
//#include <utility>
//#include<iomanip>
// #include<string>
using namespace std ;

int main(){
    int a=10, b=20, c=40, d=50 ;
    cout << min({a,b,c,d}) << endl ;
    cout << max({a,b,c,d}) << endl ; 
    swap(a,b) ;
    cout << a << " " << b<< " " << c<< " " << d<< endl ;

    double e= 123.897771 ;
    cout<< fixed << setprecision(3) << e << endl ;

    char s[100];
    //getchar();  // eta 1st character ta niye felai dibe
    cin.getline(s,100);
    cout << s << endl ;
}