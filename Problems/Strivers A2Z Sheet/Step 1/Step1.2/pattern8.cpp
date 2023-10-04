#include<bits/stdc++.h>
using namespace std;

void pattern8(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"  "; //remember to give two spaces as you have given a space with the star
        }
        
        for (int j = 0; j < (2*n - (2*i + 1)); j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

int main() {
    pattern8(4);
    return 0;
}