// an array A of N numbers. Determine if it's palindrome or not.
// using two pointer technique
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n] ;

    for(int i=0; i<n; i++){
        cin >> ar[i] ;
    }
    int i=0, j= n-1 ;
    int flag =1 ;

    while(i<j){
       if(ar[i] != ar[j]){
         flag =0; break ;
       }
       i++ ; j-- ;
    }

    cout << ( (flag==1) ? "YES" : "NO" ) << endl ;  //ternary
    //(flag==1) ? cout<<"YES"<< endl : cout << "NO"<< endl ; // or evabe likha jai


    return 0 ;
}