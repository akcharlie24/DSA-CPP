#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]); // this is the inbuilt function to swap two numbers
        start++;
        end--;
    }
}

void printArr (int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {2, 34, 55, 24, 145, 98, 20};
    int size = 7;

    reverse(arr, size);

    return 0;
}