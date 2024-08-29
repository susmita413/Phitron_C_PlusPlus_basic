#include<bits/stdc++.h>   // work perfectly
using namespace std;

class Cricketer{
    public:
        int jersey_no ;
        char country[50] ;
};

int main(){
    Cricketer *dhoni = new Cricketer ;
    dhoni->jersey_no = 18;
    char a[50] = "India" ;
    strcpy(dhoni->country, a) ;

    Cricketer *kohli = new Cricketer ;
   // kohli = dhoni ;  // address copy kore so , value copy hobena

    kohli->jersey_no = dhoni->jersey_no ;
    strcpy(kohli->country, dhoni->country ) ;

    delete dhoni ;
    cout << kohli->jersey_no << " " << kohli->country << endl ;

    return 0 ;
}