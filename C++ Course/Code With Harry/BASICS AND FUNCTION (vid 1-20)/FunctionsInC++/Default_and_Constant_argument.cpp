#include<iostream>
using namespace std;

//Function with a default argument 
float moneyRecieved (float currentMoney, float factor = 1.04){
    return currentMoney*factor;
}

// Function with constant argument
void displayValue(const int x) {
    
    // x = 10; // Error: Cannot modify a constant argument inside function's scope
    cout << "The value is: " << x << std::endl;
    
}

int main() {
    int money=100000;
    cout<<"If you have "<<money<<" after one year you will recieve "<<moneyRecieved(money)<<endl;
    cout<<"If you are a VIP and you have "<<money<<" after one year you will recieve "<<moneyRecieved(money,1.10)<<endl;
    //here we are changing the value of default argument that is 1.04 

    int number = 69;
    displayValue(number); // Call the function with a non-const argument

    return 0; 
}