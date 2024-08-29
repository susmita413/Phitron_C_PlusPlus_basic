// 2_return_dynamicArray_00.cpp

#include<bits/stdc++.h>
using namespace std; 

int* fun(){
    int a[5]= {3,4,5,6,7} ;
    return a ;              // the address of index0 is returned 
}
                            //BUT WHEN the fun() will be delete from call stack, 
                            //its static array, pointer will also be deleted

int * fun2(){     
    int *a = new int[5];           // dynamic array in Heap/ Dynamic memory
    for(int i=0 ; i<5; i++){       // Input
        cin >> a[i] ;              // 3 4 5 6 7 
    }
    return a ; 
}        


int main(){
    int *k= fun() ;         // receives a blank Address

    // for(int i=0 ; i<5; i++){      // output
    //     cout<< k[i] <<" " ;      // There is no OUTPUT , Segmentation fault
    // }

    int *p = fun2() ;
    for(int i=0 ; i<5; i++){      // output
        cout<< p[i] <<" " ;      // 3 4 5 6 7
    }

    return 0 ;
}