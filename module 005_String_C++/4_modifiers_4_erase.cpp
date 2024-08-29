//4_modifiers_4_
// s.erase(start index)  -> 1 perameter
// s.erase(start index, length)  -> 2 perameter

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "HappyBirthday" ;                 
    cout<< a << endl ;

    a.erase(5);           // index 5 theke purotuk delete krbe
    cout<< a << endl ;    // Happy

    a = "HappyBirthday" ;
    a.erase(5,3) ;       // index 5 theke suru kore 3ta character delete krbe.
    cout<<endl << a << endl ;  //Happythday
    

    return 0 ;
}