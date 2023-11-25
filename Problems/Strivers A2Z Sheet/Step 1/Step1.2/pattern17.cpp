#include<bits/stdc++.h>
using namespace std;

void pattern17(int n){
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        
        char ch = 'A';
        int breakpoint = (2*i + 1)/2;

        for (int j = 1; j <= 2*i + 1 ; j++)
        {
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        
        cout<<endl;
    }
    //below code gives different output chkout why
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     int breakpoint = (2*i + 1)/2;
    //     char ch = 'A';
    //     for (int j = 0; j < 2*i + 1; j++)
    //     {
    //         cout<<ch;
    //         if (j <= breakpoint) ch++;
    //         else ch--;
    //     }
    //     cout<<endl;
    // }
}

int main() {
    pattern17(5);
    return 0;
}