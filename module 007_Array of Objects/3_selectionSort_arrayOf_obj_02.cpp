// Sort array of object using selection sort
// descending sort(big to small) according to  mark
// jader same mark thakbe , tader roll ascending sort hobe

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
            if(a[i].mark < a[j].mark){   // descending sort under 'mark'
                swap(a[i], a[j]) ;
            } 

            if(a[i].mark == a[j].mark){
                if(a[i].roll > a[j].roll){   // ascending sort under 'roll'
                    swap(a[i], a[j]) ;
                } 
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
6
Neha 106 90
Sifat 150 90
Akib 389 95
Sakib 204 47
Rakib 215 90
Dolon 281 67

*/