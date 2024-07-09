#include<bits/stdc++.h>
using namespace std;

void printarr(int arr[5]){ // a good practice is to pass the size of array along with the array given in the code below
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"--------"<<endl;
}

void incrementArray (int arr[5]){
    arr[0]+=10;
    cout<<"incremented array"<<endl;
    printarr(arr);
}


int main() {
    int arr[5] = {1,2,3,4,5};
    incrementArray(arr); //array is passed as a reference not as a copy //pass by reference
    printarr(arr);
    return 0;
}

//in this code we learnt that the array is passed as a reference not as a copy 

//code as given in the video  : 

// #include<iostream>
// #include<limits.h>
// using namespace std;

// void printArray(int arr[], int size){ //****size dena is always a good practice*****
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<' ';
//     }
//     cout<<'\n';
// }

// void inc(int arr[], int size){
//     arr[0] = arr[0]+10;
//     printArray(arr, size);
// }
