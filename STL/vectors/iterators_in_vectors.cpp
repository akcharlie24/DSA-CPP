#include<bits/stdc++.h>
using namespace std;

int main() {
    /****************iterators in vectors****************/

    vector<int> v = {10, 2, 3, 4, 5};

    vector<int>::iterator it = v.begin(); // it is an iterator which points to the first element of the vector 
    cout << *(it + 1) << endl; // this will print the element at index 1

    auto it2 = v.end(); // this will point in the end of the vector i.e. after the last element of the vector
    cout << *it2<<endl;     // this will give some garbage value as it is pointing after the last element of the vector 

    auto it4 = v.rend(); // reverse end -- this will point to the element before the first element of the vector
    auto it3 = v.rbegin(); // reverse begin -- this will point to the last element of the vector

    auto lastElem = v.back(); //this will give the last element of the vector (not the iterator)
    cout<<lastElem<<endl; // we did not use * because it is not an iterator it is just a variable which stores the last element of the vector


    /*************iterating over a vector*************/

    // 1st way to iterate over a vector
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; //we can also use v.at(i) instead of v[i]
    }
    cout << endl;

    // 2nd way to iterate over a vector

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" "; // *it will give the value at that index * is used to dereference the iterator
    }
    cout<<endl;
    //we can also use auto in place of vector<int>::iterator

    // 3rd way to iterate over a vector
    for (auto iter : v) // this is called for each loop
    {
        cout<<iter<<" ";
    }cout<<endl;
    
    return 0;
}