#include <iostream>
using namespace std;

/****Fuction prototype****/ 
// type function_name (arguments);

int sum(int a , int b); // ye function prototype assurity (not guaruntee) deta hai ki sum name ka function aage milega dhoondne par  
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 
// int sum(int, int); //--> Acceptable 

void g(void); // Ye function na to koi outputs(void hai) deta hai na inputs(void hai) leta hai  
// void g(); // Acceptable (as koi inputs le hi nahi raha)  

int main () {  // main function se start krta hai program read karna
    
    int num1, num2;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl; //called the function by passing values 
    
    // Jo ye num1 and num2 ki values hai ye a aur b ko saup (pass kar) di jaengi
    // a bolega ok mai num1 hu aur b bolega mai num2 hu
    // Aur c return ho jaega (function ki return value)
    
    // A point to be noted is that formal and actual parameters can have same names and it is completely fine 
    
    g(); //called g [void function] 
    
    return 0;
}

int sum(int a, int b){
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a+b;
    return c;
}

void g(){
    cout<<"Hello, Good Morning "<<endl;
}