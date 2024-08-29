#include<bits/stdc++.h>
using namespace std;

namespace Rakib{
    int age = 27 ;
    void hello(){
        cout<< "Rakib NAMESPACE _" << endl ;
    }
}

namespace Sakib{
    int age2 = 34 ;
    void hello2(){
        cout<< "SAKIB NAMESPACE _" << endl ;
    }
}

namespace Mahi{
    int age = 30 ;
    void hello(){
        cout<< "MAHI NAMESPACE _" << endl ;
    }
}

using namespace Rakib ;
using namespace Sakib ;
//using namespace Mahi ;


int main(){
    cout<< "rakib= " << age << endl ;
    hello() ;

    cout<<"sakib= " << age2 << endl ;
    hello2() ;

    cout<<"mahi= " << Mahi::age << endl ;
    Mahi::hello() ;

    return 0 ;
}