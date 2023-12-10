#include<bits/stdc++.h>
using namespace std;

int main() {
    //initialization in an array    
    int arr0[] = {2,34,5,66,324,443};
    cout<<arr0[5]<<endl;

    int arr[10] = {1,2,3,4,5};// remaining elements are initialized to 0
   
    //int arr2[4] = {1,2,3,4,3}; // too many initializers
   
    int arr3[] = {}; // returns garbage value
    cout<<arr3[13]<<endl;//returns garbage value.
   
    int arr4[10] = {0}; //initializes all with zero.
    cout<<arr4[1]<<endl;
   
    return 0;
}