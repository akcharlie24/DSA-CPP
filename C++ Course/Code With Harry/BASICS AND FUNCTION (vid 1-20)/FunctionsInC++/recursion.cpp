#include<iostream>
using namespace std;

unsigned long long factorial (int num){
    if (num<=1){                           // base condition is needed in recursion
        return 1;
    }
        return num*factorial(num-1);
    
}

int main() {
    int userInput;
    cout<<"Enter the number please "<<endl;
    cin>>userInput;
    cout<<"Factorial of given number is "<<factorial(userInput)<<endl;
    return 0;
}