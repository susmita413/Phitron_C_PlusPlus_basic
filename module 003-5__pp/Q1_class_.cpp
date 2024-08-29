// Create 3 static objects with the help of the constructor .
// print who got the highest math_marks and print his/her name.
// ekhane char name jhamela kore.

#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    char sec;
    double math_mark;
    int cls ;

    Student(char name[], int roll, char sec, double math_mark, int cls){
        strcpy(this->name, name) ;
        this->roll= roll ;
        this->sec = sec ;
        this->math_mark = math_mark ;
        this->cls = cls ;
    }
};


int main(){
    char a1[100] = "Ramisa" ;
    char a2[100] = "Dolna" ;
    char a3[100] = "Salma" ;
    Student a(a1, 110, 'B', 34.87, 7) ;
    Student b(a2, 230, 'C', 70.33, 9) ;
    Student c(a2, 303, 'B', 15.45, 9) ;

    double mx = max({a.math_mark, b.math_mark, c.math_mark}) ;
    if (a.math_mark == mx) cout << a.name << endl ;
    else if(b.math_mark == mx) cout << b.name << endl ;
    else cout << c.name << endl ;

    return 0 ;
}

/*
  Student a("Ramisa", 110, 'B', 34.87, 7) ;  
    Student b("Dolna", 230, 'C', 70.33, 9) ;
    Student c("Salma", 303, 'B', 15.45, 9) ;
// // evabe name dile char array er size bujhena , tai problem hoy

// nicherta kaj kore
char a1[100] = "Ramisa" ;
    char a2[100] = "Dolna" ;
    char a3[100] = "Salma" ;

    Student a(a1, 110, 'B', 34.87, 7) ;
    Student b(a2, 230, 'C', 70.33, 9) ;
    Student c(a2, 303, 'B', 15.45, 9) ;
*/