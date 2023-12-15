#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int size1 = 6; // better hai arrays ki jgh vector le lia kro usse size nikalna nhi padta
    int size2 = 5;

    vector<int> ans;

    // algorithm:
    //  arr1 ka ek element uthao aur arr2 ke saare elements se compare karo
    //  agar koi element match ho jaata hai toh usko ans vector mei push karo
    //  arr1 ke har ek element ke lie arr2 ko traverse kar rhe hain
    //  we can use nested loop just like pattern questions.

    for (int i = 0; i < size1; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < size2; j++)
        {
            if (element == arr2[j])
            {
                // mark
                arr2[j] = -1; // agar element match ho jaata hai toh usko -1 mark kar do taki dubara match na ho //dry run krke dekh lo pta chl jaega
                // agar negative numbers hain to INT_MIN se mark kar lena 
                ans.push_back(element);
            }
        }
    }

    cout << "Intersection of two arrays: " << endl;
    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}