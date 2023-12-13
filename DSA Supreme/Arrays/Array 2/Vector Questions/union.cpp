#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 3, 4, 5};
    int arr2[] = {3, 4, 6, 7};

    int size1 = 6;
    int size2 = 4;

    vector<int> ans;

    //marking the duplicates in arr2 as INT_MIN by comparing to arr1
    // note that all these solutions are brute force solutions and are not the best solutions
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = INT_MIN; // mark as intmin so that it is not repeated
            }
        }
    }

    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] != INT_MIN)
        {
            ans.push_back(arr1[i]);
        }
    }

    for (int i = 0; i < size2; i++)
    {
        if (arr2[i] != INT_MIN)
        {
            ans.push_back(arr2[i]);
        }
    }

    cout << "Union of two arrays: " << endl;
    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}