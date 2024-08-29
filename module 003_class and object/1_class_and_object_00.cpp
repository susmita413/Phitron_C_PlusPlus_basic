// 1_class_and_object_00

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
    
    //a.name= "Dekisugi" ;  // error // array initialize er time value diya jai, or,
                           // pore index dhore dhore value dite hoy
    char tmp[100] = "Dekisugi" ;
    strcpy(a.name , tmp );
    a.roll = 125;
    a.cgpa = 3.95 ;
    cout<<"1. "<< a.name <<" " << a.roll <<" "<< a.cgpa <<" "<< endl;

    Student b,c ;          // object

    cin>> b.name >> b.roll >> b.cgpa ;   // name e 'space' rakha jabena
    cin>> c.name >> c.roll >> c.cgpa ;   

    cout<<"2. "<<b.name <<" "<< b.roll << " "<< b.cgpa << endl ;
    cout<<"3. "<<c.name <<" "<< c.roll << " "<< c.cgpa << endl ;



    return 0 ;
}
/* input output- 
SUNEO 118 3.23
Nobita 136 3.79 

2. SUNEO 118 3.23
3. Nobita 136 3.79
*/