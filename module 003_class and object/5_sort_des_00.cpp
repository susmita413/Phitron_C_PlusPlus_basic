//sort descending
//

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;       
    int a[n];        
    for (int i = 0; i < n; i++)    
        cin >> a[i];   
    
    sort(a, a +n, greater<int>() );       // descending order sort
                       
    for (int i = 0; i <n; i++)
        cout << a[i] << " ";       // এরে প্রিন্ট করা হচ্ছে। 
                                   
    return 0 ;
}

/* input
10
1 2 3 -4 -5 10 7 9 8 50

*/