#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name ;
        int roll, mark ;
        // constructor dile main() e beshi likha lagbe
};


int main(){
    int n=3 ;
    // cin >> n;
    //Student a[n] ; // static array of objects
    //int *a = new int[n] ; // Dynamic array

    Student *a = new Student[n] ; // Dynamic array of object

    for(int i=0; i<n ; i++){
        //cin>> a[i].name ; // space nibena

        getline(cin, a[i].name) ;
        cin >> a[i].roll >> a[i].mark ;
        cin.ignore() ;                  // enter k ignore korbe jate ,
                                        // next string e na jai 'enter'
    }

    for(int i=0; i<n ; i++){
        cout << a[i].name <<" " << a[i].roll << " " << a[i].mark << endl ;
    }
    
    return 0 ;

    
}

/*
Susmita Paul
345 79
Arpta Paul
278 89
Seema Paul
290 95

output; Susmita Paul 345 79
Arpta Paul 278 89
Seema Paul 290 95

*/