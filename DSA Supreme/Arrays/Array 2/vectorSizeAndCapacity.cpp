#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    for(auto x : vec) { //for each loop where x is the element of the vector
        cout<<x<<" ";
    }

    cout<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
}