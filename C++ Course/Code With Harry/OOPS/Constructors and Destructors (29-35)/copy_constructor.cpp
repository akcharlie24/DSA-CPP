#include<iostream>
using namespace std;


class Number{
    int a;
    public:
        Number(){
            a = 0;
        }

        Number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        Number(Number &obj){                                 // This is a copy constructor jisme hamne Number ke ek obj ka reference pass kia hai 
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;                   //jo object bnaenge wo reference obj ke a ki value ko copy kar lega
        }

        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};


int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    
    // z1 should exactly resemble z
    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();


    return 0;
}
