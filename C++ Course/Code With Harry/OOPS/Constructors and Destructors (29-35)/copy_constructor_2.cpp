#include<iostream>
using namespace std;

// IN a copy constructor the new object is an independent copy of the old object

class Person {
    int age;
    string name;

    public:
        Person (string Name, int Age ){
            name = Name ;
            age = Age ;
        }

        Person (Person &obj){  // copy constructor created 
            cout<<"Copy constructor called "<<endl;
            name = obj.name;
            age = obj.age;
        }

        void display (){
            cout<<"Name : "<<name<<" and Age : "<<age<<endl;
        }
};

int main() {
    Person p1("Harry", 20), p2 ("Lovish", 21);
    
    p1.display();
    p2.display();

    Person p3 (p1); // copy constructor invoked  

    p3.display();

    Person p4 = p2;  // copy constructor will be invoked here too 

    p4.display();

    return 0;
}