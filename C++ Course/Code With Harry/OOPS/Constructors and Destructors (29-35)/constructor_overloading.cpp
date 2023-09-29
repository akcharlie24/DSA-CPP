#include<iostream>
using namespace std;

class complex {
    int a,b;
    public:
        complex (){  //default constructor 
            a = 0;
            b = 0; 
        }

        complex (int v1 , int v2){  // parametrized constructor with two arguments
            a = v1;
            b = v2;
        }

        complex (int val){ // parametrized constructor with one argument
            a = val;
            b = 0; //deni padegi warna garbage value lega
        }

        void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main() {
    complex c1;
    c1.printNumber();

    complex c2 (2,4);
    c2.printNumber();

    complex c3 (1);
    c3.printNumber();

    return 0;
}