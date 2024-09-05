#include<bits/stdc++.h>
using namespace std;

int main (){
    vector<int>v5 = {10,20,30,40,50,60};

    vector<int>::reverse_iterator itr = v5.rend();
    vector<int>::iterator itr2 = v5.begin();

    cout<<*(itr-1)<<endl;

    // int dist = distance(itr,v5.end()-1);
    // cout<<dist<<endl;    

    return 0;
}