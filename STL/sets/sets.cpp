#include<bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    //Set is sorted 
    //Set is unique (no two elements are same)

    s.insert(1); // {1}
    s.insert(2); // {1, 2}
    s.insert(5); // {1, 2, 5}
    s.insert(2); // {1, 2, 5} //2 is not inserted again as it is already present
    s.emplace(3); // {1, 2, 3, 5} //emplace also acts as insert
    s.insert(4); // {1, 2, 3, 4, 5}

    auto it = s.find(2); //find() returns the iterator to the element if it is present else it returns the iterator to the end of the set

    auto it2 = s.find(6); //it2 points to the end of the set as 6 is not present in the set
    auto it3 = s.find(5);

    s.erase(it); // {1, 3, 4, 5} //erases the element at the iterator
    
    s.erase(3); // {1, 4, 5} //erases the element 3 

    s.insert(10);
    s.insert(11);
    s.insert(12);
    s.insert(13); // {1, 4, 5, 10, 11, 12, 13}

    auto point1 = s.find(1);
    auto point2 = s.find(10);

    s.erase(point1, point2); // {10, 11, 12, 13} 

    int count = s.count(10); //count() returns the number of times the element is present in the set
    
    //for lower and upper bound watch striver video
    return 0;
}