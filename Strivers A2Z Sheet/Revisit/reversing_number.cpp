#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int lastDigit;
        int revNum = 0;
        while (x != 0)
        {
            lastDigit = x % 10;
            revNum = (revNum * 10) + lastDigit;
            x = x / 10;
        }
        if (revNum >= INT_MAX || revNum <= INT_MIN) //marked for later , use gpt , it says that this should come in the while block.
            return 0;
        else
            return revNum;
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    cout << s.reverse(n) << endl;
    return 0;
}