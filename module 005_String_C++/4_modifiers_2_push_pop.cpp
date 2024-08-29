// 4_modifiers_2_
// push_back()
// pop_back()

#include<bits/stdc++.h>
using namespace std;

int main(){   
    // push_back() -> // index extend and push
    string a= "Hello" ;
    //a = "HelloA" ;        // same work

    // string b= "A" ;         // same work
    // a= a+b ; // a+= b ;

    a = a+ "A" ;               // NORMALLY, WE USE
    // a[5] = 'A' ;            // here, works but not proper task .

    a.push_back('A') ;         // perfectly work
    cout <<endl<< a << endl ;
    
    a.pop_back() ;             // remove last character 
    a.pop_back() ;             // again remove last character 
    cout <<endl<< a << endl ;  // Hell

    return 0 ;
}