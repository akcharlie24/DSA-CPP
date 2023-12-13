#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr{1,2,3,4,5,6,7,8,9,10};

    //we need to find elements whose sum is equal to 9 
    int sum = 9;
    //algorithm:
    // 1. bahar waale for loop se ek element uthao
    // 2. andar waale for loop se baaki elements ke saath sum check karo 
    // 3. andar wala for loop i+1 se start hoga as agle ke sath sum check karna hai
    // 4. agar sum mil jaata hai toh print karo
    // this is a brute force solution 
    
    for(int i=0;i<arr.size();i++) {
        int element = arr[i];
        for(int j=i+1;j<arr.size();j++) {
            if(element+arr[j]==sum) 
            {
                cout<<"Pair found: "<<endl; 
                cout<<element<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}