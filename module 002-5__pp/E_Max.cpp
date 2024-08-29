// Given a number N, and N numbers, find maximum number in these N numbers.

#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin >> n ;

    int num;
    int mx = INT_MIN ;
    for (int i=1; i<=n ; i++){
        cin>> num ;
        if(mx < num){
            mx = num ;
        }
    }
    cout <<mx << endl ;
    
    return 0 ;
}