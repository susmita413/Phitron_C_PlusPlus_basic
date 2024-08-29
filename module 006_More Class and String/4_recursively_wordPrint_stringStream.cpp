#include<bits/stdc++.h>
using namespace std;

void print(stringstream &ss){

    string word ;
    if(ss>>word){ // jokhn group theke last word tao delete hoye jabe, tokhn,
                  // if condition false hobe, and recursion shesh hoye jabe
        cout << word << endl; 
        print(ss) ;
    }
}

int main(){
    string s;
    getline(cin,s);       // I am Susmita paul Susmi
    stringstream ss(s) ;
    print(ss) ;


    return 0 ;
}