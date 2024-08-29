#include<bits/stdc++.h>
using namespace std;

int main(){
    string s= "hello_C++" ;
    // for (int i=0; i< s.size(); i++){    // normal iteration
    //     cout<< s[i] << " " ;
    // }
    // cout<< endl ;

    //cout<< s.begin() <<endl ; //error because private data,do not show address
    cout << *s.begin() << endl ; // dereference //h

    cout << *s.end() << endl ;   // NULL , Because end() points to index= size
    cout << *(s.end()-1) << endl ; //dereference // +

    cout<< endl ;

    // iterate using pointer

    //string:: iterator it ;
    // for(it =s.begin(); it< s.end() ; it++){
    //     cout << *it << " " ;                  // dereference      
    // }
    // cout<< endl ;

    for(string:: iterator it =s.begin(); it< s.end() ; it++){  // same Work
        cout << *it << " " ;                  // dereference      
    }
    cout<< endl ;

    for(auto it =s.begin(); it< s.end() ; it++){   // same work
        cout << *it << " " ;                  // dereference      
    }
    cout<< endl ;



    return 0 ;
}