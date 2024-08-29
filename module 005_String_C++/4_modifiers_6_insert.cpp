//4_modifiers_6_
// s.replace(start index, length, "replace kore ja likhbo")  -> 3 perameter
// s.insert(start index, start index er char soriye ja likhbo) -> 2 peram.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "HappyBirthday" ;                 
    cout<< a << endl ;

    a.insert(5, "Susmi_") ;   // index 5 theke bakituk soriye "susmi" bosabe .
    cout<< a << endl ;

    // same work with replace()
    cout<< endl ;
    a= "HappyBirthday" ;
    a.replace(5,0,  "Susmi_") ;   // length e 0 dile, kono character delete hobena
                                 // tokhn, start index ta right e sorabe and
                                 // oi jaigai given string PART ta bosbe 
    cout<< a << endl ;  //HappySusmi_Birthday

    return 0 ;
}