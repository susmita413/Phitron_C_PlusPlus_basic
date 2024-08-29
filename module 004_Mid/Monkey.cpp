#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100001] ;

    while(cin.getline(s,100001)){
        int n = strlen(s) ;
        int ar[n] ;

        for(int i=0; i<n; i++){
            if(s[i] == ' '){
                ar[i] = -1 ;
                continue ;
            }
            ar[i] = int(s[i]) ;

        }

        sort(ar, ar+n) ;
        for(int i=0; i<n ; i++){
            if(ar[i] == -1){
                continue ;
            }
            cout<< char(ar[i]) ;
        }
        cout<< endl ;
    }

    return 0 ;
}