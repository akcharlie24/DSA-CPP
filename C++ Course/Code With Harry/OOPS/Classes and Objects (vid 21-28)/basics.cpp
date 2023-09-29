#include<iostream>
using namespace std;

class Employee {
    private :
        int a,b,c;

    public:
        int d,e;
        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){ //this is the syntax to write function here we use scope resolution operator to specify that this function belongs to the class Employee 
    a=a1;                                                                                                                                                                       
    b=b1;                                                           
    c=c1;
}

/*

// We can declare objects right after classes 
   for eg.

Class Student {

    //definition of the class ;

}harry,lovish,shubham; //declaring objects right after the class; but its not a recommended way of doing things;


*/

// **** by default the access modifier of a class is private ****

int main() {
    Employee harry;

    harry.d=3;
    harry.e=21;
    
    // harry.a=2;  ----> this will throw err as a is declared private

    harry.setData(12,34,33);
    harry.getData();

    return 0;
}