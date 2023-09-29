#include<iostream>
using namespace std;
int main (){
    int a = 45;   
    float b = 45.46;

    cout<<"The value of a is "<<(float)a<<endl; // a ko float me convert  
    cout<<"The value of a is "<<float(a)<<endl; // aise bhi likh sakte h 

    cout<<"The value of b is "<<(int)b<<endl;  
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;

    //c++ can also convert data types automatically which is called as implicit typecasting

    return 0;
}