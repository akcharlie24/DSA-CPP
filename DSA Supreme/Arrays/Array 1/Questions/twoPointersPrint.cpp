#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 34, 55, 24, 145, 98, 20};
    int size = 7;

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (start == end)
            cout << arr[start] << " ";
        else
        {
            cout << arr[start] << " " << arr[end] << " ";
        }
        start++;
        end--;
    }

    return 0;
}