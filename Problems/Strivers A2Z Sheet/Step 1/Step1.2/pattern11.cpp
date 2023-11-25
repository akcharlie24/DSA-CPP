#include<bits/stdc++.h>
using namespace std;

void pattern11(int n){
    int printer = 1; 
    for (int i = 0 ; i<n; i++){

        if(i%2 == 0) printer = 1;
        else printer = 0;

        for (int j = 0; j <= i; j++)
        {
            cout<<printer<<" ";
            printer = 1 - printer ;//printer switching mechanism code
        }cout<<endl;
        
    }
}

int main() {
    pattern11(9);
    return 0;
}