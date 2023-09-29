#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;   //taki jaise hi wo obj destroy ho tab wo count ko free karde 
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        // This is a block of code and everything inside this has a scope of this only
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl; // n2 and n3 will be destroyed as they are inaccessible beyond this block
    }
    cout << "Back to main" << endl; // n1 will only be destroyed after the main function ends as it has the scope inside all of the main
    return 0;
}
