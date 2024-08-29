
#include <iostream>
#include <algorithm> // for min(), max()
#include <utility>   // for swap()
#include <string>
using namespace std ;


int main(){
    int a ;
    char s[100] ;
    char s2[50] ;
    cin>> a ;
    cin >> s2 ;   // string e "SPACE" nibe na
    getchar() ;   // "ENTER" nibe

    cin.getline(s,100) ; // "SPACE" nibe ,  
                         // "ENTER"paile oitakei 1ta string hisebe nibe
                         // eijonne age getchar() dite hoi
    cout<<a << endl ;
    cout<< s2 << endl ;
    cout<< s << endl ;

    return 0;
}

/* input->
874
interNAtional
UNITED international uni 234 susmita

OUTPUT->
874
interNAtional
UNITED international uni 234 susmita
*/
