#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr;

    vector<int> a{1, 2, 3};
    vector<int> b{4, 5, 6, 4}; // this is allowed
    vector<int> c{7, 8, 9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++) // arr[i].size() is the size of the inner vector
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // above way was the easy way of initializing a 2d vector
    // now look at the hard way

    int row = 3, col = 5;
    vector<vector<int>> arr2(row, vector<int>(col, 4)); // this is the syntax for initializing a 2d vector saari values 4 se initialize ho jayengi

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr2[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    arr2[1][2] = 10; // we can change the value of any element like this
    cout << arr2[1][2] << endl
         << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr2[i][j] << " ";
        cout << endl;
    }

    return 0;
}
