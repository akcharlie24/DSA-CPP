#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE (O(n^3))
// int maxSubArrayLength(int arr[], int n, long long k) {
//   int len = 0;
//
//   for (int i = 0; i < n; i++) {
//     for (int j = i; j < n; j++) {
//       long long sum = 0;
//       // be careful of start and end of loop ( Always Dry Run )
//       for (int l = i; l <= j; l++) {
//         sum += arr[l];
//       }
//       if (sum == k)
//         len = max(len, j - i + 1);
//     }
//   }
//
//   return len;
// }

// BRUTE FORCE 2 (using 2 loops)
int maxSubArrayLength(int arr[], int n, long long k) {
  int len = 0;

  for (int i = 0; i < n; i++) {
    long long sum = 0;
    for (int j = i; j < n; j++) {
      sum += arr[j];
      if (sum == k)
        len = max(len, j - i + 1);
    }
  }

  return len;
}

// Get These On Striver Notes

// OPTIMAL1 --> Map and a length variable approach
// This is the most OPTIMAL solution for array that has positives and negatives
// and zeroes.
int lenOfLongSubarr(int A[], int N, int K) {
  // Complete the function
  map<int, int> preSumMap;
  int maxLen = 0;
  // x is Sum till that elem
  int x = 0;
  for (int i = 0; i < N; i++) {
    x += A[i];
    if (x == K)
      maxLen = max(maxLen, i + 1);
    int rem = x - K;
    if (preSumMap.find(rem) != preSumMap.end()) {
      int len = i - preSumMap[rem];
      maxLen = max(maxLen, len);
    }
    // Updating map only on the condition that sum doesnt exist before
    // (to get the left most possible sum)
    if (preSumMap.find(x) == preSumMap.end()) {
      preSumMap[x] = i;
    }
  }

  return maxLen;
}

// OPTIMAL (for array with only positives) --> Two Pointer (Leetcode)
int lenOfLongSubarrPositives(int a[], int n, int k) {
  int left = 0, right = 0; // 2 pointers
  long long sum = a[0];
  int maxLen = 0;

  while (right < n) {
    // if sum > k, reduce the subarray from left
    // until sum becomes less or equal to k:
    while (left <= right && sum > k) {
      sum -= a[left];
      left++;
    }

    // if sum = k, update the maxLen i.e. answer:
    if (sum == k) {
      maxLen = max(maxLen, right - left + 1);
    }

    // Move forward thw right pointer:
    right++;
    if (right < n)
      sum += a[right];
  }

  return maxLen;
}

int main() {
  int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  int k = 3;

  // int len = maxSubArrayLength(arr, size, k);

  // int len = lenOfLongSubarr(arr, size, k);

  int len = lenOfLongSubarrPositives(arr, size, k);

  cout << len << endl;

  return 0;
}
