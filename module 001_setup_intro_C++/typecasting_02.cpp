#include<iostream>
using namespace std ;

int main(){
    char c ;
    cin >> c ;
    cout<<"ASCII value of '"<<  c <<"' is = "<< int(c) <<endl ;      // TYPE-CASTING

    int a=102 ;
    //long long int b= (long long int)(a) ;
    cout<< a << "~~LLInt~~ " << (long long int)(a) << endl ;  // 102~~LLInt~~ 102
    cout<< a << "~~Double~~ " << double(a) << endl ;          // 102~~Double~~ 102

    double d = 123.876555 ;
    cout<< d << "~~int~~ " << int(d) << endl ;              // 123.877~~int~~ 123   
}