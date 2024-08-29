#include<bits/stdc++.h>
using namespace std;

void fun(string &s){  // class ,obeject pass krte '&' reference use kori normally
    s= "World in 1st fun" ;
}

void fun2(string s){  // ekhane 's' string object er ekta copy gese
    s= "2nd fun" ;   // tai value change krleo main functioner 's' change hobena.
}

int main(){
    string s = "Hello" ;
    fun(s) ;
    fun2(s) ;
    cout<< s << endl ;

    return 0 ;
}
/*                        //pointer use kore same kaj hoy
#include<bits/stdc++.h>
using namespace std;

void fun(string *s) {
    *s = "World";
}

int main() {
    string s = "Hello";
    fun(&s);
    cout << s << endl;
    return 0;
}

*/