// Given a mathematical expression. The expression will be one of the
// following expressions: A + B = C, A - B = C and A * B = C
// Print "Yes" If the expression is Right , Otherwise print the 
//right answer of the expression.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    char sign, eq ;
    cin >> a >> sign >> b >>eq >> c ;

    if((sign=='+' && a+b==c) || (sign=='-' && a-b==c) || (sign=='*' && a*b==c))
        cout<< "Yes" << endl;
    else {
        if(sign == '+') cout << a+b << endl ;
        else if(sign == '-') cout << a-b << endl ;
        else if(sign == '*') cout << a*b << endl ;
    }
         
    return 0 ;
}