#include<iostream>
using namespace std;
int main(){
    int n;
    label:
    cout<<"Please enter number of rows ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<"  ";
            }else{
                cout<<"* ";
            }
        }cout<<endl;
    }goto label;
    return 0;
}