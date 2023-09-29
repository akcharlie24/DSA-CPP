#include <iostream>
using namespace std;

class Shop
{

    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter() { counter = 0; }
    void setPrice();
    void displayPrice();
};

void Shop ::setPrice()
{
    cout << "Enter your item ID for item number " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price for item number " << counter + 1 << endl;
    cin >> itemPrice[counter];
    cout << endl;
    counter++;
}

void Shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The item price for " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();

    for (int i = 0; i < 4; i++)
    {
        dukaan.setPrice();
    }

    dukaan.displayPrice();
    
    return 0;
}