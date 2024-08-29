// sort array of object using sort() function
// descending / ascending

#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name ;
        int roll, mark ;
};

bool cmp (Student a, Student b){
          // jemon vabe sort krte chai, temon condition dibo
    // if(a.mark >= b.mark) return true ; // descending
    // else return false ;

    // if(a.mark <= b.mark) return true ; // ascending
    // else return false ;
    
    return a.mark <= b.mark ;             // ascending , shortcut 1 line
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
6
Neha 106 90
Sifat 150 90
Akib 389 95
Sakib 204 47
Rakib 215 85
Dolon 281 67

*/