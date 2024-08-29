#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;

    
    for(int i=1; i<=tt; i++){
        string s,x;
        cin.ignore();
        cin >> s;
        cin.ignore();
        cin>> x ;
        int n = x.size() ;
        
        while(s.find(x) != -1){
            int t = s.find(x) ;
            
            s.replace(s.find(x) , n,"#") ;
        }
        cout<< s << endl ;
    }

    return 0 ;
}