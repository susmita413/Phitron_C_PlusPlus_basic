//4_modifiers_5_
// s.replace(start index, length, "replace kore ja likhbo")  -> 3 perameter

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "HappyBirthday" ;                 
    cout<< a << endl ;

    a.replace(5,3, "XY") ;     // "Bir" replace kore "XY" likhbe
    cout<< a << endl ;         //HappyXYthday

    // for testing
    a= "HappyBirthday" ;
    a.replace(4,5, "YYYYYY78 ") ;
    cout<< a << endl ; 

    // another case
    cout<< endl ;
    a= "HappyBirthday" ;
    a.replace(4,0, "KKK78 ") ;   // length e 0 dile, kono character delete hobena
                                 // tokhn, start index ta right e sorabe and
                                 // oi jaigai given string PART ta bosbe 
    cout<< a << endl ;  //HappKKK78 yBirthday

    return 0 ;
}