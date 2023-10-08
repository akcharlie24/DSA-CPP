#include <bits/stdc++.h>
using namespace std;

int main()
{

    pair<int, int> p = {1, 3};  // pair of int and int , we can also make pair of different data types like int and char etc
    cout << p.first << " " << p.second << endl; // accessing the pair elements

    // we can also make pair using make_pair function

    auto p2 = make_pair(1, "hello"); // auto will automatically detect the data type of the pair
    cout << p2.first << " " << p2.second << endl;

    // we can also make pair of pairs
    
    pair<pair<int, int>, string> car = {{1, 2}, "Audi"};
    cout << car.first.first << " " << car.first.second << " " << car.second << endl;

    // we can make array of pairs also
    
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << " " << arr[0].second << endl;
    
    return 0;
}