#include<bits/stdc++.h>
using namespace std;

void pattern12 (int n){
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        
        for(int j = 1 ; j<= (2*n - 2*i - 2); j++){
            cout<<" ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
}

int main() {
    pattern12(7);
    return 0;
}

//above code written by me works fine 
//code given by striver is a little different in terms of spaces but it works too bas usne i ko n tk chalaya hai naki n-1 tak aur spaces wala mamla thoda sa different kar lia hai.