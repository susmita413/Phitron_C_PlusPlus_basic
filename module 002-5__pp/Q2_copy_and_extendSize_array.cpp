// concept -> increase dynamic array size

#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin >> n;
    int *a = new int[n] ;    // dynamic array
    for(int i=0; i<n ; i++){
        cin >> a[i] ;
    }
    
    int m;                   // m > n hobe always
    cin >> m ;               // size of another array
    int b[m] ;               // taking another array for coping

    for(int i=0; i<n ; i++){
        b[i] = a[i] ;        // copy
    }
    delete[] a ;             // delete previous dynamic array

    for(int i=n ; i<m ; i++){  // take input for extra index
        cin >> b[i] ;
    }

    for(int i=0; i<m; i++){    // output new static array
        cout<< b[i] << " " ;
    }

    return 0 ;
}

/*
input :3
10 20 10
5
60 40
output:
10 20 10 60 40
*/