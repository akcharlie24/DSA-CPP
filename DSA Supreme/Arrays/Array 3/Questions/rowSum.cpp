#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {2, 3, 6, 1},
        {3, 5, 1, 2},
        {4, 1, 2, 7}};

    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
            cout << "Sum of row " << i << " is " << sum <<endl;
    }
    // can also do column wise sum also
    return 0;
}