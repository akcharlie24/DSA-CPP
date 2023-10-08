#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;
    //Priority Queue is a special type of queue in which the elements are stored in a sorted order mainly the top element is the greatest of all

    pq.push(1); // {1}
    pq.push(2); // {2, 1}
    pq.push(5); // {5, 2, 1}
    pq.push(3); // {5, 3, 2, 1} 
    pq.emplace(4); // {5, 4, 3, 2, 1}  //emplace also acts as push
    pq.push(6); // {6, 5, 4, 3, 2, 1}

    cout<<pq.top()<<endl; //6 //top() returns the top element that is the largest one

    pq.pop(); // {5, 4, 3, 2, 1} //top wala chala gaya
    cout<<pq.top()<<endl; 

    //Minimum Heap (top element is the smallest)
    priority_queue<int, vector<int>, greater<int>> pq1; //this is the syntax for minimum heap

    pq1.push(1); // {1}
    pq1.push(2); // {1, 2}
    pq1.push(5); // {1, 2, 5}
    pq1.push(10); // {1, 2, 5, 10}
    pq1.push(3); // {1, 2, 3, 5, 10}
    pq1.emplace(6); // {1, 2, 3, 5, 6, 10}

    cout<<pq1.top()<<endl; //1

    pq1.pop(); // {2, 3, 5, 6, 10}
    cout<<pq1.top()<<endl; //2
    return 0;
}