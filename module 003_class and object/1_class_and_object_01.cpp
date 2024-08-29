// 1_class_and_object_01
// getline use


#include<bits/stdc++.h>
using namespace std;

class Student{
    public:               // Access Modifier
       char name[100] ;   // class variable
       int roll ;
       double cgpa ;

};
int main(){
    Student a ;            // object

    char tmp[100] = "Hidetoshi Dekisugi doraemon" ;
    strcpy(a.name , tmp );
    a.roll = 125;
    a.cgpa = 3.95 ;
    cout<<"1. "<< a.name <<" " << a.roll <<" "<< a.cgpa <<" "<< endl;

    Student b,c ;          // object

    cin.getline(b.name,100);    
    cin >> b.roll >> b.cgpa ;  
    getchar() ;              // prevoius input er 'ENTER' nibe

    cin.getline(c.name, 100) ; 
    cin >> c.roll >> c.cgpa ;   

    cout<<"2. "<<b.name <<" "<< b.roll << " "<< b.cgpa << endl ;
    cout<<"3. "<<c.name <<" "<< c.roll << " "<< c.cgpa << endl ;

    return 0 ;
}

/* output input output- 
1. Hidetoshi Dekisugi doraemon 125 3.95 

sakib al hasan
45 2.66
nobi nobita 
23 3.88

2. sakib al hasan 45 2.66
3. nobi nobita  23 3.88

*/