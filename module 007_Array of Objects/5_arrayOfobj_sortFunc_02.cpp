// sort array of object using sort() function
// descending sort under mark, if marks are same ,
// then ascending sort under roll

#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name ;
        int roll, mark ;
};

bool cmp (Student a, Student b){
          // jemon vabe sort krte chai, temon condition dibo

    if(a.mark > b.mark) return true ;    // descending
    else if(a.mark < b.mark) return false ;
    else{   // a.mark == b.mark
        if(a.roll < b.roll) 
            return true ;
        else
            return false ;

        //return a.roll < b.roll ;   //shortcut
    }
}

int main(){
    int n ;
    cin >> n;
    Student a[n] ; 
    for(int i=0; i<n ; i++){
        cin>> a[i].name >> a[i].roll >> a[i].mark ; 
    }
    
    sort(a, a+n, cmp) ;
    cout<< endl ;
    for(int i=0; i<n ; i++){
        cout << a[i].name <<" " << a[i].roll << " " << a[i].mark << endl ;
    }
    return 0 ;

}

/*
7
Neha 206 90
Sifat 150 90
Akib 389 95
Sakib 204 47
Rakib 215 85
Dolon 281 67
Monika 145 90

*/