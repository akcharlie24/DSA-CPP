#include<bits/stdc++.h>
using namespace std;

void pattern14(int n){
    for (int i = 0; i < n; i++)
    {
        for(char ch = 'A'; ch <= ('A'+ i) ; ch++){ // 'A' + 0 = 'A' , 'A' + 1 = 'B' and so on as 'A' is 65 in ASCII and 'B' is 66 and so on .
            cout<<ch<<" ";
        }cout<<endl;
    }
    
}

int main() {
    pattern14(7);
    return 0;
}