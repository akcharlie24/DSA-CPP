#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1, 5, 3},
        {9, 5, 6},
        {4, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // printing the transpose : 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}