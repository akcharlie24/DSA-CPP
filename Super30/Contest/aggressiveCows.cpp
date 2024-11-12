#include <bits/stdc++.h>
using namespace std;

// 6 4
// 0 3 4 7 10 9

bool canPlace(vector<int> &stalls, int dist, int k) {
  int len = stalls.size();
  int cows = 1;
  int prev = 0;

  for (int curr = 1; curr < len; curr++) {
    if ((stalls[curr] - stalls[prev]) < dist) {
      cows++;
      prev = curr;
    }
  }

  if (cows >= k)
    return true;

  return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
  int len = stalls.size();
  sort(stalls.begin(), stalls.end());

  for (auto i : stalls) {
    cout << i << endl;
  }

  int low = 1;
  int high = stalls[len - 1] - stalls[0];
  int ans = 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    bool canWe = canPlace(stalls, mid, k);

    if (canWe) {
      ans = mid;
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return ans;
}

int main() {
  vector<int> stalls = {0, 3, 4, 7, 10};

  int ans = aggressiveCows(stalls, 4);

  cout << ans << endl;

  return 0;
}
