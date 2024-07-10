#include <bits/stdc++.h>
using namespace std;

void pattern5(int n){
    for (int i = n; i > 0; i--)
    {
        for (int j = i ; j>0 ; j--){
            cout<<"* ";
        }cout<<endl;
    }
    
}

int main()
{
    pattern5(7);
    return 0;
}