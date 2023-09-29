#include<iostream>
using namespace std;

int main(){
    
    /* LOOPS in C++
     There eare three types of loop in c++ :
    1. For loop
    2. While Loop 
    3. do-while Loop */

 // Syntax for FOR Loop
 // for(initialization; condition; updation)
 // {
 //      loop body(C++ code)
 // }
    for ( int i=1; i<=2; i++)
    {
        if(i%2==0)
        cout<<i<<endl;
    }
 
//Infinite loop example ( Comment out if you want to run the code properly )
//    for (int j = 3; /*missing condition*/ ; j++)
//    {
//         if(j%2==0)
//         cout<<j<<endl;
//    }
   
    return 0;
}