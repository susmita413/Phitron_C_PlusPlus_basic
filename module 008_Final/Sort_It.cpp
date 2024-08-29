#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string nm ;
        int cls;
        char s;
        int id, math_marks, eng_marks ;
};

bool cmp(Student a, Student b){
    int total1 = a.math_marks + a.eng_marks ;
    int total2 = b.math_marks + b.eng_marks ;
    if(total1 > total2){
        return true;
    }
    else if(total1 < total2){
        return false ;
    }
    else{
        return a.id < b.id ;
    }
}

int main(){
    int n ;
    cin >> n;
    Student a[n] ; 

    for(int i=0; i<n ; i++){
        cin>> a[i].nm >>a[i].cls >>a[i].s >> a[i].id >>a[i].math_marks >> a[i].eng_marks ;
    }
    
    sort(a,a+n, cmp) ;
   
    for(int i=0; i<n ; i++){
        cout << a[i].nm <<" " << a[i].cls <<" " << a[i].s <<" " << a[i].id<<" " << a[i].math_marks <<" " << a[i].eng_marks << endl ;
    }
    
    return 0 ;

    
}
