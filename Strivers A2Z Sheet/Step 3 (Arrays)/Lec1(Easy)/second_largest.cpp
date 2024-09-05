#include <bits/stdc++.h>
using namespace std;


struct Answer {
  int largest = INT_MIN;
  int secondLargest = INT_MIN;
};

Answer giveLargestAndSecondLargest(int arr[], int n) {
  Answer answer;

  for (int i = 0; i < n; i++) {
    if (arr[i] > answer.largest) {
      answer.secondLargest = answer.largest;
      answer.largest = arr[i];
    } else if (arr[i] > answer.secondLargest && arr[i] != answer.largest) {
      answer.secondLargest = arr[i];
    }
  }

  return answer;
}

int main() {
  int arr[2] = {3, 200};
  Answer answer;
  answer = giveLargestAndSecondLargest(arr, 2);
  cout << answer.largest << endl;
  cout << answer.secondLargest << endl;
  return 0;
}
