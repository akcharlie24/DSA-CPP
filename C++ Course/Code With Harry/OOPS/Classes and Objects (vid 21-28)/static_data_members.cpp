#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // static variable class ke sath associate karta hai naki object ke sath (class ki property hai object ki nahi)

public:
    void setData()
    {
        cout << "Enter the ID of employee " << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The ID of employee is " << id << endl;
        cout << "The number of employee is " << count << endl;
    }

    // static functions/methods are those which can only access static data members and can only call static member functions
    // static functions/methods can be directly called using the class name w/o creating an object

    static void getCount()
    {
        // cout<<id;  // this throws an error
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count; // static variable ko hmesha bahar b define krna hoga
                      // static variable is by default initialized with 0
                      // count=10 yahan par hi initialize krna hoga naki upr class me wahan nhi kr skte err throw krega

int main()
{
    Employee harry, lovish, rohan;

    harry.setData(); // if we had not used the static variable then in each count it would have printed 1 as count would have been created for each object
    harry.getData();
    Employee::getCount(); // directly calling the static method

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    return 0;
}