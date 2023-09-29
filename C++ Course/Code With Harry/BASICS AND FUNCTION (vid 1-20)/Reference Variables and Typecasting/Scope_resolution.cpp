#include<iostream>
using namespace std;
int c = 45;

int main(){
    //***********BUILT IN DATA TYPES************
    int a,b,c;
    cout<<"Enter the number a "<<endl;
    cin>>a;
    cout<<"Enter the number b "<<endl;
    cin>>b;
    c=a+b;
    cout<<"Value of c is "<<c<<endl;
    cout<<"Global value of c is "<<::c<<endl; // :: this is scope resolution operator that enables us to use the global value of c
    return 0;
}