//4_modifiers_3_
// s=
// s.assign()

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    a = "Happy" ;                 // normally we use
    cout<< a << endl ;

    a.assign("Happy Birthday") ;  // same work
    cout<< a << endl ;

    return 0 ;
}