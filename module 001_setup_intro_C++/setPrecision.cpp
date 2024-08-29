#include <iostream>
#include <iomanip>  // for setprecision 
                    // INPUT OUTPUT MANIPULATION
#include <stdio.h>  // for scanf(....)
using namespace std ;

int main(){
   double A ;

   cin >> A ;  // 450.123456
   cout<< fixed << setprecision(5) << A << endl ; // doshomiker por 5 ghor print hobe 
                                                  // 450.12346 
   cout<< fixed << setprecision(9) << A << endl ; // 450.123456000

   return 0 ;

}