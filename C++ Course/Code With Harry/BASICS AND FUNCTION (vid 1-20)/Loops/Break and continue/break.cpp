#include <iostream>
using namespace std;

int main () {
    for (int i=0; i < 40; i++)
    {
        cout<<i<<endl;
        if(i==2){
            break; //ye loop se exit kara dega 
        }
    }
    
    return 0;
};