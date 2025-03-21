#include <iostream>
using namespace std;

void swap(int c, int d)
{ // This wont swap the numbers
    int Temp = c;
    c = d;
    d = Temp;
}

void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReferenceVar(int &a, int &b)
{ // This is known as call by reference (as reference de dia)
    // a and b are reference variables that are aliases for x and y // matlab a and b are just nicknames for x and y
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4, y = 5;

    cout << "The numbers before swap are " << x << " and " << y << endl;

    // swap(x,y); // This wont swap the numbers (explained in copy)

    swapPointer(&x, &y); // As humne formal parameters pointers bnae hai to hume address pass krane padenge
                         // This is known as call by reference (as reference de dia)

    // swapReferenceVar(x,y);

    cout << "The numbers after swapping are " << x << " and " << y << endl;
    return 0;
}