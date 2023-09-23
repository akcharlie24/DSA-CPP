#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    cout << "Size of a is " << sizeof(a) << endl; // sizeof operator

    // char ch = 256; // this throws a warning as 256 is out of range of char data type
    // cout << "The value of char ch is " << ch << endl; // and hence the output is garbage value

    int n;
    if (cin >> n) // cin returns true if the input is successful but even if you enter a float, it will still return true because it will convert the float to int
    {
        cout << "The value of n is " << n << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    if(cout << "Hello World"<<endl ){ // cout operation returns a reference to itself (cout will always be exexuted) and hence it will always return true meaning the cout operation was successful and hence the if block will always be executed 
        cout << "This will always be printed" << endl;
    }

    return 0;
}