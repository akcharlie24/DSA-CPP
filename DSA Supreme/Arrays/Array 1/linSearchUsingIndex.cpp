#include<bits/stdc++.h>
using namespace std;

int linearSearch (int arr[], int size , int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[5] = {2,34,5,6,3};
    int size = 5; 
    cout<<"Enter the key to find"<<endl;
    int key;
    cin>>key;

    int index = linearSearch(arr,size,key);

    if( index != -1 ){
        cout<<"element is found at the index "<<index<<" of array"<<endl;
    }
    else cout << "element is not found"<<endl;
    return 0;
}