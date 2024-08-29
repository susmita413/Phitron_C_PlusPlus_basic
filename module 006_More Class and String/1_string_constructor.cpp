#include<bits/stdc++.h>
using namespace std;

int main(){
    // string s= "Hello world" ;    // normally use kori
    // cout << s << endl ;

    // 1                           // constructor koyek vabe use kora jai
    string s("Hello World") ;
    cout<<"1->  " << s << endl ; 
    
    //2    // Index 7 er age porjonto/ 1st 7ta character 't' STRING e rakhe
    string t("Hello World", 7) ;  
    cout<<"2->  " << t << endl ; 

    //3   //'a' STRING er 1st 4ta character bade bakigula 'u' STRING e rakhe
    string a= "Hello World" ;
    string u(a,4) ;
    cout<<"3->  " << u << endl ; 

    //4   // STRING e N bar 1ta Character thakbe
    string v(20, 'A') ;
    cout<<"4->  " << v << endl ; 


    return 0 ;
}