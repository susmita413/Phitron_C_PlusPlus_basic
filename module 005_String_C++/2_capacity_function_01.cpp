#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello World Susmi. <3 " ;
    cout << s << endl ;
    cout<< "size: " << s.size() << endl ;  //22 // length dekhabe
    cout<< s.max_size() << endl ;          //2147483647 
    // amr Compiler e 'string' SIZE MAXIMUM joto hote pare toto dekhabe .

    cout<< endl ;
    string a ;
    cout<< a.capacity()<<"  "<< a.size() << endl ;  // 15  0
    a = "zxcvbnm asdfghjkl wertyhgff" ;
    cout<< a.capacity()<<"  "<< a.size() << endl ;  // 30  27

    a = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhkkkkkkkkkkkh" ;
    cout<< a.capacity()<<"  "<< a.size() << endl ;  // 68  68


    return 0 ;
}
/*
s.size() -> returns the size of the string. 

s.max_size() -> returns the maximum size that string can hold. 

s.capacity() -> returns current available capacity of the string.
*/