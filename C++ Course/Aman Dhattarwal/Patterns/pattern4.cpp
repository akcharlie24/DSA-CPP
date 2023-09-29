#include<iostream>
using namespace std;
int main (){
    int n;
    start:
    cout<<"Please enter number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
          cout<<i<<" ";
        }cout<<endl;
    }goto start;
    return 0;
}