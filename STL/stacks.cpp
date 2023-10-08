#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st; 
    //Stack follows a LIFO (Last In First Out) order , element which is stored last leaves first

    st.push(1); // {1}
    st.push(2); // {1, 2}
    st.push(3); // {1, 2, 3}
    st.push(4); // {1, 2, 3, 4} //4 is the last in

    cout << st.top() << endl; //top displays the top of the stack
    st.pop(); // {1, 2, 3}
    cout << st.top() << endl;
    
    st.push(5); // {1, 2, 3, 5}
    cout << st.size() << endl;
    cout << st.empty() << endl; //checks wether empty or not
    return 0;
}