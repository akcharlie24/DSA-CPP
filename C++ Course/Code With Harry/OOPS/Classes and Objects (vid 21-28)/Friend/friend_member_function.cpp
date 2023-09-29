#include <iostream>
using namespace std;

// Forward declaration
class Complex; // ye dena padega warna compiler calculator ko compile karte hue error dega

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex); // bas declare karre hai as abhi o1.a , o2.a use karenge to compiler bolega mujhe kya pata aage kuch milega a ya b ya nhi
};

class Complex
{
    int a, b;
    // Individually declaring function as friend
    friend int Calculator ::sumRealComplex(Complex, Complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2) //define hame class ke bhi baad karna padega as warna hum a aur b ko to access hi nhi kar paenge 
{
    return (o1.a + o2.a);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    return 0;
}