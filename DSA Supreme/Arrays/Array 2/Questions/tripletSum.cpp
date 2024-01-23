#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 18;

    // algorithm
    //  pair sum me do loop the yahan bas ek aur loop laga denge
    //  jahan pe i and j ko fix karke karenge aur k ko search karenge
    //  agar k mil gaya toh print karenge
    //  k ko j+1 se start karenge //human mind is chalak --> try to form patterns....

    for (int i = 0; i < arr.size(); i++)
    {
        int element1 = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            int element2 = arr[j];
            for (int k = j + 1; k < arr.size(); k++)
            {
                int element3 = arr[k]; //redundant code we can directly use arr[k] but ok.
                if (element1 + element2 + element3 == sum)
                {
                    cout << "Triplet Found" << endl;
                    cout << element1 << " " << element2 << " " << element3 << endl;
                }
            }
        }
    }
    return 0;
}

// Time Complexity: O(n^3) because of three nested loops 

//aise hi agar hum 4 element ka sum nikalna chahte hai toh 4 nested loops lagenge and so on 
