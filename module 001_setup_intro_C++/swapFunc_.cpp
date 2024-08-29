
#include <iostream>
#include <algorithm> // for min(), max()
#include <utility>   // for swap()
using namespace std ;

void my_swap(int *a, int *b){
    int tmp = *a;
    *a = *b ;
    *b = tmp ;
}
int main(){
    int a=15;
    int b= 45 ;
    cout<< "a= " << a <<", b= " << b << endl ;

   // my_swap(&a,&b) ;
   // cout << "After SWAP with my_swap -> a= "  << a <<", b= " << b << endl ;  // a= 45, b= 15
   
    swap(a,b);
    cout << "After SWAP with swap() -> a= "  << a <<", b= " << b << endl ; // a= 45, b= 15
    return 0;
}

