// an array A of N numbers. Print the smallest possible result of 
// Ai + Aj + j - i , where 1  ≤  i < j  ≤  N.

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,n ;
    cin>> test ;
    
    for(int i=1; i<=test; i++){
        cin >> n ;
        int ar[n] ;
        for(int j=0; j<n; j++){
            cin >> ar[j] ;
        }

        int min_sum = INT_MAX ;
        for(int j=0; j< n-1 ; j++){
            for(int k= j+1; k<n; k++){
                int res = ar[j]+ ar[k]+ k- j ;
                min_sum = min(min_sum, res) ;
            }
        }
        cout << min_sum << endl ;
    }

    return 0 ;
}