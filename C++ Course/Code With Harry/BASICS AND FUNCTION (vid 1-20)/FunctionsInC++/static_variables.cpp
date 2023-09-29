#include<iostream>
using namespace std;

int product(int a, int b){
    // Not recommended to use below lines with inline functions
    
    static int c=0; // This line executes only once (isme c ki value ko initialize krdia)
    c = c + 1; // Next time this function is run, the value of c will be retained
    
    return a*b+c;
}

int main() {
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    for (int i = 0; i < 10 ; i++)
    {
        cout<<"The product is "<<product(a,b)<<endl;
    }
    return 0;
}