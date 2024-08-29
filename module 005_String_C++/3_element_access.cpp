#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    cin>> s ;   // space nibena // Hello_world

    cout<< s[6] << endl ;      // show i=6th index character   // w
    cout<< s.at(6) << endl ;   // show i=6th index character   //w

    cout<< s[s.size()-1] << endl ;  // show last index character  //d 
    cout << s.back() << endl ;      // show last index character  //d

    cout<< s.front() << endl ;      // show 1st index character   //H

    return 0 ;
}