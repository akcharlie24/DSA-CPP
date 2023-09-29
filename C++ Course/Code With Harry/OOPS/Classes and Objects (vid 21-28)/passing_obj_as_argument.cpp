#include<iostream>
using namespace std;

class complex {
    int a;
    int b;
    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void setDataBySum(complex o1, complex o2){           //here we are passing the objects of its own class as arguments in the function  //we can also pass the objects of other class as arguments (maybe can see in inheritance)
            a = o1.a + o2.a;    //o1 and o2 are giving their a and b for the sum          
            b = o1.b + o2.b;
        }

        void printNum (){
            cout<<"The given number is "<<a<<"+i"<<b<<endl;
        }
};

int main() {
    complex c1,c2,c3;

    c1.setData(2,4);
    c1.printNum();
    
    c2.setData(6,5);
    c2.printNum();

    c3.setDataBySum(c1,c2);
    c3.printNum();
    return 0;
}