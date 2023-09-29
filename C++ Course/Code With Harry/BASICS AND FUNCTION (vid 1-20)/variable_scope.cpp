#include<iostream>
using namespace std;

int glo=6; //glo naam se ek global variable bana dia.

void sum(){
     cout<<"Value of glo is "<<glo<<"\n"; //here it takes the value of global variable glo as there is no glo in sum function.
}

int main(){

    int glo = 5; //local variable for int (same name as of global variable glo) is made and initialized as 5
    glo = 10 ; //local varible is updated with the value 10 
    
    int a= 4, b =5;
    float pi=3.14;
    char c = 'u';
    
    sum(); //global value displayed
    
    cout<<"This is a tutorial of variables .The value of a is "<<a<<" The value of b is "<<b<<"\n" ; // \n jo hai wo enter ka role play karta h 
    cout<<"The a value of pi is "<<pi ;
    cout<<"\n The a value of c is "<<c ;
    
    cout<<"\n The a value of glo is "<<glo ; //LOCAL VARIABLE IS GIVEN PRESIDENCE OVER GLOBAL IN CASE OF SAME NAMES..
    
    return 0; 
}