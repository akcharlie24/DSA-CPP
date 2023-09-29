#include<iostream>
using namespace std;

int main (){

// WHILE Loop in c++
// Syntax for WHILE Loop

  /*  while (condition)
    {
        statements
    } */

    // Printing 1-40 using while loop
    int i=1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }

// Infinte while loop
    // int j=40;
    // while (j>=39){
    //     cout<<j<<endl;
    //     j++;
    // }

    // Infinte while loop another way ( comment out as it takes lot of memory and may result in system crash)
    //  int j=1;
    //  while (true){
    //      cout<<j<<endl;
    //      j++;
    //  }

    return 0;
}