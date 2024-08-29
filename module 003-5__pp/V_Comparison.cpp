// Given a comparison symbol S between two numbers A and B. 
//Determine whether it is Right or Wrong.
//Input Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), 
// S can be ('<', '>','=') without the quotes.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b ;
    char x ;
    cin >>a >>x >> b ;

    if((x== '>' && a>b) || (x== '<' && a<b) || (x== '=' && a==b)) {
        cout << "Right" << endl ;
    }
    else cout << "Wrong" << endl ;


    return 0 ;
}