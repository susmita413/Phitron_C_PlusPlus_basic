// integer sort with sort() function
// 0 < size < 10^3

#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size ;
    int ar[size] ;
    
    for(int i=0; i<size; i++){
        cin >> ar[i] ;
    }
    sort(ar, ar+size) ;

    for(int i=0; i<size; i++){
        cout << ar[i] << " ";
    }
    
    return 0 ;
}