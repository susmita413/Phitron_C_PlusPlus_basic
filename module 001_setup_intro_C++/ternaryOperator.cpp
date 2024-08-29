// ternary operator =
// (condition) ? true : false ;

#include <iostream>
#include <iomanip>  // for setprecision 
                    // INPUT OUTPUT MANIPULATION
#include <stdio.h>  // for scanf(....)
using namespace std ;

int main(){
    int num ;
    cin>> num ;
    // if(num%2==0) cout<< "Even" <<endl ;
    // else cout<< "Odd" <<endl ;

    (num%2==0) ? cout<< "Even"<< endl : cout<< "Odd"<< endl ;


    return 0;
}
/* 34
Even  
*/

/*33
Odd
*/