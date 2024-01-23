#include<bits/stdc++.h>
using namespace std;

int findUnique(vector<int> v){
    vector<int> ans;
    int result = 0;
    
    for (auto i = 0; i < v.size() ; i++)
    {
        result ^= v[i]; //XOR approach only works when the duplicates are in even number (pairs) and there is only 1 unique element
    }
    
    return result;
}

int main() {
    vector <int> arr = {1,2,3,2,1,4,4,5,3};
    int result = findUnique(arr);
    cout<<result<<endl;
    return 0;
}