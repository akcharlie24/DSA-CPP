#include <iostream>
using namespace std;

int main () {
    // What is a pointer ? -----> data type which holds the address of other data types 

    int a=3;
    int*b = &a; // ( int* ka matlab ek aisa pointer jo integer data type hold karta ho )
                // pointer ka name b rakh dia hai and wo a ko point kar raha hai 
                
    // int*b                             
    // b = &a aise bhi likh sakte hai 

    //  & -----> Address of operator (variables ko ek address assigned hota hai memory me)
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl; 
 
    // * -----> (value at) Deference of operator     
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int**c = &b; // ek aisa pointer jo pointers ke address ko store karta hai
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at (c)) is "<<**c<<endl;

    return 0;
};