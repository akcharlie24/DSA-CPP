#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    static int count ;
public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created

    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
    cout<<"Constructor Called ";
    cout<<"For "<<count+1<<" th time "<<endl; // we can keep the count of a constructor using a static variable count 
    count++;
}

int Complex :: count;

int main()
{
    Complex c1, c2, c3; // Jaise hi obj bnae sbke constructor call honge
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}


/*
    Characteristics of Constructors :

    1. It should be declared in the public section of the class.
    2. They are automatically invoked whenever an object is created
    3. They cant return values and dont have a return type 
    4. It can have default arguments 
    5. We cant refer to their address
*/