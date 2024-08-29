
#include <iostream>
#include <algorithm> // for min(), max()
using namespace std ;

int main(){
    int a,b,c,d ;
    cin>> a >> b>> c>> d ;
    cout <<"MInimum of a,b: "<<min(a,b) << endl ;
    cout <<"Maximumof a,b : "<<max(a,b) << endl ;

    cout <<"MInimum of a,b,c,d: "<<min({a,b,c,d}) << endl ;
    cout <<"Maximumof a,b,c,d : "<<max({a,b,c,d}) << endl ;

    return 0;
}
/*
4 5 6 7
MInimum of a,b: 4
Maximumof a,b : 5
MInimum of a,b,c,d: 4
Maximumof a,b,c,d : 7
*/