#include<iostream>
using namespace std;
int main (){
    int n;
    label:
    cout<<"Please enter number of rows ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }cout<<endl;
    }goto label;
    return 0;
}
