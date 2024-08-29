//4_modifiers_1_append
// s+=  
// s.append()

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "Lion Live_" ;
    string b = "Lion KING" ;
    a+=b ;                     // a STRING er por b append/ jora hobe
   // a.append(b) ;            // same kaj
    cout<< a << endl ; //Lion Live_Lion KING
    cout<< b << endl ;         // b kono change hobena


    return 0 ;
}