#include<bits/stdc++.h>
using namespace std;

bool linearSearch (int arr[], int size , int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main() {
    int arr[5] = {2,34,5,6,3};
    int size = 5; 
    cout<<"Enter the key to find"<<endl;
    int key;
    cin>>key;

    if(linearSearch(arr,size,key)){
        cout<<"element is found"<<endl;
    }
    else cout << "element is not found"<<endl;
    return 0;
}