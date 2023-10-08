#include<bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    //Queue follows a FIFO (First In First Out) order , element which is stored first leaves first

    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.push(3); // {1, 2, 3}
    q.emplace(4); // {1, 2, 3, 4} 
    q.push(5); // {1, 2, 3, 4, 5} //5 is last in and 1 is first in

    q.back() += 5; // {1, 2, 3, 4, 10} //last wale me 5 add kardia //back() returns the last element
    q.front() += 5; // {6, 2, 3, 4, 10} //front() returns the first element

    q.pop(); // {2, 3, 4, 10} //first wala chala gaya

    cout<<q.front()<<endl; 
    cout<<q.back()<<endl;

    //rest all the functions like swap, empty, size are same
    
    return 0;
}