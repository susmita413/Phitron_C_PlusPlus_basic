// a string S of size N. Print S after sorting it.
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O

// using Frequency Array / counting array (array size<= 10^7)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size ;
    getchar();

    char ar;
    int frq[26]= {0} ;

    for(int i=0; i<size ; i++){
        cin>> ar ;
        int val = int(ar-'a') ;
        frq[val]++ ;
    }
    

    for(int i=0; i<26; i++){
        int val = frq[i] ;
        if(val != 0){
           char s = char(i+97) ;
           for(int j=1; j<= val ; j++){
            cout<< s ;
           }
        }
    }


    return 0 ;
}
