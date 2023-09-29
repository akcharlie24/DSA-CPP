#include<iostream>

using namespace std;

int main(){
    // int a = 34;
    // cout<<"The value of a was "<<a<<endl;
    // a =45; ( Updated the value of a )
    // cout<<"The value of a is "<<a<<endl;

    //***********Constants in C++**********//

    const float a = 3.14 ; // const use karne se iski value change nhi ho sakta 
    cout<<"The value of a was "<<a<<endl;
    // a = 45.16; -----> this is now an error as humne constant kardia h a ki value ko 
    cout<<"The value of a is "<<a<<endl;

    return 0;
}