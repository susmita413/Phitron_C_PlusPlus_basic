#include <iostream>
#include <stdio.h>  // for scanf(....)
using namespace std ;

int main(){
   int a,b ;
//    while(scanf("%d %d",&a,&b) != EOF){  // IN C language
//       if(a==0 && b==0 )  break ;
//       printf("  -> %d %d \n",a,b) ;

//    }


    while(cin >> a>> b){
        if(a==0 && b==0 )  break ;
        cout <<"  -> " << a << " " << b << endl ;
    }

   return 0 ;

}