#include<bits/stdc++.h>
using namespace std;

void countarr(int arr[], int size){
    int countZero = 0;
    int countOne = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 0) countZero++;
        if(arr[i] == 1) countOne++;
    }
    cout<<"No. of zeroes are "<<countZero<<endl;
    cout<<"No. of ones are "<<countOne<<endl;
}

int main() {
    int arr[] = {0,1,1,0,1,1,0,1,0,1};
    int size = 10;

    countarr(arr,size);
    return 0;
}