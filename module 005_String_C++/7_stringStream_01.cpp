#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    getline(cin,a) ;         //hello world Susmita Paul SUSMI
    //stringstream kk(a) ;   // constructor k call dey 
    stringstream kk;         // constructor 1st e call na dile, evabe likha jai
    kk << a ;
    
    string sobdo ;

    int cnt=0 ;                                                                                                                                                                                                                                                                                          
    while(kk>> sobdo){
        cout << sobdo << endl ;    // every word line by line print hobe 
        cnt++ ;                    // word count
    }

    cout <<"number of words: " << cnt <<", string= "<<a<< endl ;
    

    return 0 ;
}