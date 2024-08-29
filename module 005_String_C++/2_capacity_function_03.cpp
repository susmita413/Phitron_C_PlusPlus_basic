#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    cin >> s ; // space nibena // Hello_world
    cout<< s.size() << endl << endl ;

    //s.resize(6,'X') ;   // size komale baki part ta delete hobe, 
                          // kono onno character bosbena.
    s.resize(6) ;
    cout<< s.size()<<"  " << s << endl ;
    s.resize(10, 'X') ;
    cout<< s.size()<<"  " << s << endl ;

    cout<< endl ;

    string a= "NoDreams_OnlyAim_" ;
    a.resize(21,'Y') ;                    // extra part tate 'Y' show krbe
    cout<< a.size()<<"  " << a << endl ;


    return 0 ;
}