#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}}; // 2d array and a good way to visualize it is to think of it as a matrix

    // This is row-wise traversal arr[i][j] is the ith row and jth column
    cout << "Row-wise traversal" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    // This is column-wise traversal arr[j][i] is the jth row and ith column
    cout << "Column-wise traversal" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr[j][i] << " ";
        cout << endl;
    }

    // other way to print the column-wise traversal is to change the loop itself

    // for(int j = 0; j < 3; j++)
    // {
    //     for(int i = 0; i < 3; i++)
    //         cout<<arr[i][j]<<" ";
    //     cout<<endl;
    // }

    return 0;
}