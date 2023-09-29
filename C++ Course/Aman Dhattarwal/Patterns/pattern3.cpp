#include<iostream>
using namespace std;
int main(){
    int n;
    start:
    cout<<"Please Enter Your Wish Of Rows";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }cout<<endl;
    }
    goto start;
    return 0;
}