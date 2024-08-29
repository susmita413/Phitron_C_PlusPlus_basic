// normal
/* switch(condition){
    case VALUE :
        WORK __code ;
        break ;
    ....
    default :
        WORK __code ;
}

*/

#include <iostream>
using namespace std ;

int main(){
    int x=3 ;
    switch(x){
        case 1 :
            cout<< "ONE" <<endl ; 
            break ;
        case 2 :
            cout<< "TWO" <<endl ; 
            break ;  
        case 3 :
            cout<< "THREE" <<endl  ; 
            break ;
        case 4 :
            cout<< "FOUR" <<endl  ; 
            break ; 
        case 5 :
            cout<< "FIVE" <<endl  ; 
            break ;

        default :
            cout<< "Not in 1 to 5" <<endl  ; 
    }

    return 0;
}

/* "break" na dile je case ta RIGHT hobe , seta soho bakigulao print hobe
THREE
FOUR
FIVE
Not in 1 to 5

*/

/* "break" dile emon hobena 
THREE
*/
