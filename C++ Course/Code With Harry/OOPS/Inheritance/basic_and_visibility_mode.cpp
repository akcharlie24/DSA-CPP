#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

 // Derived Class syntax

/* 
 class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

Note :
 1. Default visibility mode is public
 2.Public visiblity mode : Public members from the base class are inherited as public members of the derived class . 
 3.Private visiblity mode : Public members from the base class are inherited as private members of the derived class . 
 4.Private members are never inherited 
*/
// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee  // visibility mode is public 
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};


int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    
    return 0;
}
