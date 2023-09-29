#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    string name;
    void setId()
    {
        salary = 12000;
        cout << "Enter the ID of employee " << endl;
        cin >> id;
    }
    void getId()
    {
        cout << "The ID of employee is " << id<<endl;
    }
};

int main()
{
    Employee fb[4]; //we can directly create an Array of objects for our ease of use 

    // fb[1].name = "Harry";
    // cout<<fb[1].name<<endl; //we can also assign names to employees like this way or can make a setName() function

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
    return 0;
}