#include<iostream>
using namespace std;

int fib (int n){
    if (n<=1){   //base conditions are needed in recursions 
        return 1;
    }
    return fib (n-1) + fib (n-2);
}

int main() {
    int x;
    cout<<"Please give the number"<<endl;
    cin>>x;
    cout<<"The number at position "<<x<<" of fibonnaci series is "<<fib(x)<<endl;
    return 0;
}