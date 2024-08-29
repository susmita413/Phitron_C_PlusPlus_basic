#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >>s ;                        // fghjkiuaab
    for(int i=0; i<s.size(); i++){
       cout << s[i] <<" " ;         // f g h j k i u a a b
    }
    
    cout << endl;

    for(char c: s){         // for each loop / ranged based loop
        cout << c << " " ;
    }                       // f g h j k i u a a b

    return 0 ;
}