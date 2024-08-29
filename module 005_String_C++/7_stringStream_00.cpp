#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    getline(cin,a) ;      //hello world Susmita Paul SUSMI
    stringstream ss(a) ;  // eta ekta group , constructor k call dey 
    
    string sobdo ;
    ss>> sobdo ;  // 1ta 1ta word niye group e rakhbe, then seta 
                  // 'sobdo' er moddhe rakhe 
                                                    
    cout<< sobdo << endl ;                          // hello

    ss>> sobdo ;    // group theke ager word delete kore samne agate thakbe                                
    cout<< sobdo << endl ;                          // world           

    ss>> sobdo ;                                    //Susmita
    cout<< sobdo << endl ;

    ss>> sobdo ;                                    //Paul
    cout<< sobdo << endl ;

    ss>> sobdo ;                                     //SUSMI
    cout<< sobdo << endl ;

    ss>> sobdo ;                                    
    cout<< sobdo << endl ;                           //SUSMI
     // jehetu word shesh, tai group theke ager word delete hoye gese,
     // ekhn group e kono word nai, but STRING 'sobdo' te ager store kora
     // word theke gese, oitai print krbe.



    return 0 ;
}