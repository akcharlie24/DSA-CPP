#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int d) {
  d = d % n;
  reverse(arr, arr + d); // rotation bounds -> [first,last), based on iterators
  reverse(arr + d, arr + n);
  reverse(arr, arr + n);
}

void rotateRight(int arr[], int n, int d) {
  d = d % n;
  reverse(arr, arr + n - d);
  reverse(arr + n - d, arr + n);
  reverse(arr, arr + n);
}

int main() {
label:
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int size = sizeof(arr) / sizeof(arr[0]);
  int d;

  cout << "enter d" << endl;
  cin >> d;

  // rotateArray(arr, size, d);
  rotateRight(arr, size, d);

  for (auto value : arr) {
    cout << value << " ";
  }
  cout << endl;

  char wish;
  cout << "wish to continue ?" << endl;
  cin >> wish;
  if (wish == 'y')
    goto label;

  return 0;
}
