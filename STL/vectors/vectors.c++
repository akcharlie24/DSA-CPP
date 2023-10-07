#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v; // this creates a vector of size 0 {empty vector} //vector is a dynamic array it can have any data type

    v.push_back(1);    // this will add 1 to the end of the vector
    v.emplace_back(2); // this will also add 2 to the end of the vector but it is more efficient than push_back
    // you can read more about emplace_back on the web

    vector<int> v2(3, 50); // this will create a vector of size 3 and all the elements will be 50
    //  you can also create a vector of size 3 and all the elements will be 0 by writing vector<int> v2(3);

    vector<int> v3(v2); // this will create a vector v3 and copy all the elements of v2 to v3
    vector<int> v4;
    v4 = v3; // this will also copy all the elements of v3 to v4

    vector<int> v5 = {2, 3, 4, 5, 35, 22};
    cout << v5[1] << endl;
    cout << v5.at(4) << endl; // element at index 4


    //some functions of the vector as follows: 
    cout<<v5.front()<<endl; // first element of the vector
    cout<<v5.back()<<endl; // last element of the vector
    cout<<v5.size()<<endl; // size of the vector
    cout<<v5.capacity()<<endl; // capacity of the vector 
    cout<<v5.max_size()<<endl; // maximum size of the vector
    cout<<v5.empty()<<endl; // returns 1 if vector is empty else returns 0

    //there are many more functions of the vector you can read about them on the link given below
    //https://www.geeksforgeeks.org/vector-in-cpp-stl/

    return 0;
}