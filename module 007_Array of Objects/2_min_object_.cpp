// find object which 'mark' variable is low 

#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name ;
        int roll, mark ;
        // constructor dile main() e beshi likha lagbe
};


int main(){
    int n ;
    cin >> n;
    Student a[n] ; // static array of objects

   // Student *a = new Student[n] ; // Dynamic array of object

    for(int i=0; i<n ; i++){
        cin>> a[i].name >> a[i].roll >> a[i].mark ; 
                            //name e space nibena
    }

    /* only mark copy hoy ekhane
    int mn= INT_MAX ;
    for(int i=0; i<n ; i++){
        if(mn >a[i].mark ){
            mn= a[i].mark ;
        }
    }
    cout<< "MINIMUM mark: " << mn << endl ;
    */

    //------ whole object copy krbo
    Student mn , mx ;
    mn.mark= INT_MAX ;
    mx.mark = INT_MIN ;
    
    for(int i=0; i<n ; i++){
        if(mn.mark >a[i].mark ){
            mn= a[i] ;  // puro object copy kore 'mn' e rakhbo
        }

        if(mx.mark < a[i].mark){
            mx= a[i] ;  // puro object copy kore 'mx' e rakhbo
        }
    }
    cout <<"object with minimum mark= " << mn.name <<" "<< mn.roll <<" " << mn.mark << endl ;
    cout <<"object with maximum mark= " << mx.name <<" "<< mx.roll <<" " << mx.mark << endl ;

    return 0 ;

    
}

/*
5
mina 344 90
reena 299 56
sehtaj 345 89
pinky 208 18
tina 340 62

MINIMUM mark: 18



*/