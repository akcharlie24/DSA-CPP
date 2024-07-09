#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1 = {1, 2, 3, 4, 5};

    l1.push_front(10); // {10, 1, 2, 3, 4, 5}
    l1.pop_front();    // {1, 2, 3, 4, 5}

    // list just gives us front operations also
    // rest operations are same as vectors
    return 0;
}