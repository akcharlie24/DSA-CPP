#include <iostream>
using namespace std;
 
int main()
{
    int a = 7;
    cout << "Size of a is " << sizeof(a) << endl; // sizeof operator
 
    // char ch = 256; // this throws a warning as 256 is out of range of char data type 
    // cout << "The value of char ch is " << ch << endl; // and hence the output is garbage value
    
    
    return 0;
}