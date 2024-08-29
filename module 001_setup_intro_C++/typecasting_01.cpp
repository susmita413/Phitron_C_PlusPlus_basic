#include<iostream>
using namespace std ;

int main(){
    char c ;
    cin >> c ;
    
    // int ascii = c ;                                     // WITHOUT TYPE-CASTING
    // cout<<"ASCII value of '"<<  c <<"' is = "<< ascii ;

    // int ascii = int(c) ;                                   // TYPE-CASTING
    // cout<<"ASCII value of '"<<  c <<"' is = "<< ascii ;

    cout<<"ASCII value of '"<<  c <<"' is = "<< int(c) ;      // TYPE-CASTING

}