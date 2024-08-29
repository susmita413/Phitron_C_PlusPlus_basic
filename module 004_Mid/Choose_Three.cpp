#include<bits/stdc++.h>
using namespace std;

int main(){
    int test ;
    cin>> test ;
    for(int i=1; i<=test; i++){
        int n, sum ;
        cin>> n >> sum ;
        int ar[n] ;
        
        for(int j=0; j<n; j++){
            cin>> ar[j] ; 
        }

        int flag =0 ;

        for(int x=0; x<n; x++){
            for(int y= x+1; y<n ;y++){
                for(int z= y+1; z<n; z++){
                    if(ar[x]+ ar[y]+ ar[z] == sum){
                         flag =1 ;
                    }
                }
            }
        }

        if(flag ==1){
            cout<< "YES" << endl ;
        }
        else{
            cout<< "NO" << endl ;
        }

    }



    return 0 ;
}