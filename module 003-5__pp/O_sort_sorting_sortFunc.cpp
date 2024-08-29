// a string S of size N. Print S after sorting it.
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O

// using sort function (array size<= 10^5 or 10^6)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size ;
    getchar();

    char ar[size] ;
    cin.getline(ar,size+1) ;
    
    sort(ar, ar+size) ;
    cout<< ar << endl ;
    
}