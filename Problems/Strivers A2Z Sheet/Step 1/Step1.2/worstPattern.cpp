#include<bits/stdc++.h>
using namespace std;

void printPattern (int n){
     for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int x = 0;
            for (int k = 0; k < j; k++) {
                x += n - k;
            }

            if (j % 2 == 0) {
                cout << x + i - j + 1 << " ";
            } else {
                cout << x + n - i << " ";
            }
        }
        cout <<  endl;
    }
}

int main() {
    printPattern(5);
    return 0;
}