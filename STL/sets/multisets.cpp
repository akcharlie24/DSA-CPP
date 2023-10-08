#include<bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    //multiset is same as set but it can store duplicate elements also matlab its not unique

    ms.insert(1); // {1}
    ms.insert(2); // {1, 2}
    ms.insert(5); // {1, 2, 5}
    ms.insert(2); // {1, 2, 2, 5}
    ms.insert(1); // {1, 1, 2, 2, 5}
    ms.insert(1); // {1, 1, 1, 2, 2, 5}

    int cnt = ms.count(1); 
    cout<<cnt<<endl;

    auto it = ms.find(2); //finds the first occurence of 2
    ms.erase(it); // {1, 1, 1, 2, 5}
    //we can do multiple erase also by ms.find(1) and ms.find(2) and then ms.erase(it1, it2)

    //rest all the functions are same as set
    return 0;
}