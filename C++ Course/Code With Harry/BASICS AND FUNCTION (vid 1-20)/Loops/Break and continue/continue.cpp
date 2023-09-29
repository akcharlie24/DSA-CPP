#include <iostream>
using namespace std;

int main () {
    for(int i=0; i<40; i++){
        if(i==2){
            continue; //jaise hi i ki value 2 hogi waise hi iteration rok kar next par jump kar dega therefore 2 print nahi hoga // matlab 2 print nahi hoga but loop chalega 40 tak
        }    
        cout<<i<<endl;
    }
    return 0;
};