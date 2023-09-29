#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<< /* '<<' this is called insertion operator */ "Enter the value of num1 : \n";
    cin>> /* '>>' this is extraction operator */ num1;
 
    cout<<"Enter the value of num2 : \n";
    cin>>num2;

    cout<<"The sum is "<<num1+num2;
    return 0;
}