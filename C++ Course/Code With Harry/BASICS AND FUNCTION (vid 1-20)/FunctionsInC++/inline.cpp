#include<iostream>
using namespace std;

inline float product(float a, float b){
    return a*b;
}

//inline function is a request to the compiler which it may or may not accept 
//inline functions are only great for small function definitions 

int main() {
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    for (int i = 0; i < 10; i++)
    {
        cout<<"the value of product is "<<product(a,b)<<endl;
    }
    
    return 0;
}