//we will use the linear search altough there are better algos available for the same question

#include<bits/stdc++.h>
using namespace std;

void maxNum (int arr[], int size){
    int maxi = INT_MIN; // this is a good practice to initialize the maximum number with int min
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > maxi) maxi = arr[i];
    }
    cout<<"The maximum number in the given array is "<<maxi<<endl;
}

// a similar function can be made for the minimum case and that should be initialized with INT_MAX

int main() {
    int arr[] = {2,34,55,24,145,98,20};
    int size = 7;
    maxNum(arr,size);

    int arr2[] = {-12,-1223,-323,-2}; //if we initialize with 0 or -1 this case will fail
    int size2 = 4;
    maxNum(arr2,size2);
    
    int arr3[] = {-12,-1223,-323,0};
    int size3 = 4;
    maxNum(arr3,size3);
    return 0;
}