#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        int roll ;
        int cls;
        double gpa ;
        // Parameterized constructor to initialize the data members
        Student(int roll, int cls, double gpa){  
            this->roll = roll ;   // object er 'Student' copy = parameter theke paoa value
            this->cls = cls ;
            this->gpa = gpa ; 
        }
};

Student* fun(){
    Student rohim (345,6,2.67);     // 'ans' creates instance or copy of the class by using 
                                    // parameterized constructor.
    Student *p = &rohim ;           // Assign the address of rohim to pointer p
    return p ;                      // here , 'p' is 'Student' type pointer

}


int main(){
    
    Student *ans = fun() ;          // receives the address of 'rohim' object
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl; 
    // সেই পয়েন্টার কে ডিরেফারেন্স করে ( এক্ষেত্রে শর্টকাটে এরো সাইন ব্যাবহার করা হয়েছে ) 
    // তার ভেলু প্রিন্ট করা হচ্ছে। 
    return 0 ;
}
/*
কোডটি রান করলে আমরা দেখতে পাব গারবেজ ভেলু প্রিন্ট হচ্ছে।  কারন ফাংশন থেকে রিটার্ন 
হওয়ার পর ফাংশনে থাকা অবজেক্ট ডিলিট হয়ে গিয়েছে। 
তাই পয়েন্টার এখন যেই এড্রেসে পয়েন্ট করে আছে সেখানে কোন অবজেক্ট নেই। তাই রান করলে 
গারবেজ  ভেলু আসছে। 
*/