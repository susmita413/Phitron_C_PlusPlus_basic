// Sort array of object using selection sort

#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name ;
        int roll, mark ;
};

int main(){
    int n ;
    cin >> n;
    Student a[n] ; 
    for(int i=0; i<n ; i++){
        cin>> a[i].name >> a[i].roll >> a[i].mark ; 
    }
    
    for(int i=0; i<n-1; i++){
        for (int j=i+1; j<n ; j++){
            // if(a[i].mark > a[j].mark){   // ascending sort under 'mark'
            //     swap(a[i], a[j]) ;
            // }
            if(a[i].roll< a[j].roll){   // desscending sort under 'roll'
                 swap(a[i], a[j]) ;
            }
        }
    }

    cout<< endl ;
    for(int i=0; i<n ; i++){
        cout << a[i].name <<" " << a[i].roll << " " << a[i].mark << endl ;
    }
    return 0 ;

}

/*
5
Rifat 106 89
Sifat 110 79
Akib 109 95
Sakib 204 47
Rakib 215 67

*/