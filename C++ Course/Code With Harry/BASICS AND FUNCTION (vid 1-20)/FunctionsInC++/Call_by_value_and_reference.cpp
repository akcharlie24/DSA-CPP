#include <iostream>
using namespace std;

void swap(int c, int d){  // This wont swap the numbers
    int Temp = c;
    c=d;
    d=Temp;
}

void swapPointer(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main () {
    int x=4,y=5;                

    cout<<"The numbers before swap are "<<x<<" and "<<y<<endl;
    
    // swap(x,y); // This wont swap the numbers (explained in copy) 
    
    swapPointer(&x , &y); //As humne formal parameters pointers bnae hai to hume address pass krane padenge  
                          //This is known as call by reference (as reference de dia)

    cout<<"The numbers after swapping are "<<x<<" and "<<y;
    return 0;
}