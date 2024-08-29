#include<bits/stdc++.h>
using namespace std;

int main(){
    string a ;
    a= "qqqqqqqqqq qqqqqqqq qqq  &% qqqqqqqqq" ;
    a.clear() ;     // ei line ta comment kore dile "NOT EMPTY" output asbe .

    if(a.empty()== true) cout<< "EMPTY" << endl ;
    else cout<< "NOT EMPTY" << endl ;

    // if(a.size()==0) cout<< "EMPTY" << endl ;    // same Work
    // else cout<< "NOT EMPTY" << endl ;
    
    cout << "Is string empty?: " << (a.empty() ? "YES" : "NO") << endl;
                            // using ternary operator


    return 0 ;
}

/*
s.clear() -> clear the string.
s.empty() -> return true/false if the string is empty.

*/