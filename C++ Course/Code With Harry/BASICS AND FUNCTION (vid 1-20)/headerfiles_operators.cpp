// (ctrl + mouse click) se header files ke contents dekh sakte ho. 

// There are 2 types of header files 

// 1.System defined header files : It comes with the compiler

#include<iostream> 

// 2.User defined header files : It is written by the programmer 

// #include"this.h"  ----> It will produce an error if this.h is not present in the directory 

using namespace std;

int main (){
    int a=4, b=5;


    cout<<"Operators in c++ : "<<endl;
    cout<<"Following are the types of operators in C++ "<<endl;
    cout<<endl;

    //Arithmetic operators :-
    
    cout<<"Following are type of arithmetic operators "<<endl;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl; //as result is also an int so 0.8 ka 0 show karta h 
    cout<<"The value of a % b is "<<a%b<<endl; //
    cout<<"The value of a ++ is "<<a++<<endl; // a print kardo aur a ki value me ek plus kardo (means a=4 print kara dia then a=5 update kar dia)
    cout<<"The value of a -- is "<<a--<<endl; // a print kardo aur a ki value me ek minus kardo (a=5 (updated value) print kardi phle then a=4 update kardia)
    cout<<"The value of ++a is "<<++a<<endl; // a ki value phle update karo i.e. usme ek bdhao then usse print karo (a=4 ko phle a=5 kardia then print kardia a=5) 
    cout<<"The value of --a is "<<--a<<endl; // a ki value phle update karo i.e. usme ek kam karo then usse print karo (a=5 ko phle a=4 kardia then print kardia a=4)
    cout<<endl;   

   //Assignment operators ----> used to assign values to variables 
  
   // Eg. int a = 3, b=9
   //     char d='d'
   

   //Comparison operators
   cout<<"Following are the comparison operators "<<endl;
   cout<<"The value of a == b is "<<(a==b)<<endl;// both are not equal so output will be 0
   cout<<"The value of a != b is "<<(a!=b)<<endl;// (not equal to operator) so output is 1 as both are not equal 
   cout<<"The value of a >= b is "<<(a>=b)<<endl;// 0 as a is neither equal nor greater than b, if it was ateast equal then output would have been 1
   cout<<"The value of a <= b is "<<(a<=b)<<endl;// 1 as a is smaller than b
   cout<<"The value of a > b is "<<(a>b)<<endl;// 0 as given statement is false ,if a was equal to b then (maybe 0 but chk once) ?????
   cout<<"The value of a < b is "<<(a<b)<<endl;// 1 as given statement is true ,if a was equal to b then (maybe 0 but chk once) ?????
   cout<<endl;


   //Logical operators
   cout<<"Following are the logical operators "<<endl;
   cout<<"The value of this logical AND operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl; // false as first condition is false altough second is true
   cout<<"The value of this logical OR operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl; // true as atleast one condition i.e. a<b is true altough first on is false
   cout<<"The value of this logical NOT operator (!(a==b)) is "<<(!(a==b))<<endl; // reverses the result (in this case output should be 0 as a != b but the NOT operator changes the result)
   cout<<endl;   

   return 0;
} 
