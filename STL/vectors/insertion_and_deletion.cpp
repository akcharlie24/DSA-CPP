#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};

    // Insertion
    v1.insert(v1.begin() + 2, 10);    // Insert 10 at index 2 // {1, 2, 10, 3, 4, 5}
    v1.insert(v1.begin() + 3, 3, 20); // Insert 20, 3 times at index 3 // {1, 2, 10, 20, 20, 20, 3, 4, 5}

    // Deletion
    v1.erase(v1.begin() + 2);                 // Delete element at index 2 // {1, 2, 20, 20, 20, 3, 4, 5}
    v1.erase(v1.begin() + 2, v1.begin() + 5); // Delete elements from index 2 to 4 // {1, 2, 3, 4, 5} // [start, end) // end is not included

    // Deletion of all elements
    v1.clear(); // {empty vector}

    vector<int> v2 = {4, 6, 3, 36, 55};
    v2.pop_back(); // {4,6,3,36} // removes last element

    v2.swap(v1); // swaps v1 and v2 // v1 = {4,6,3,36} and v2 = {empty vector}

    cout << v2.empty() << endl; // returns 1 if vector is empty else returns 0
    return 0;
}