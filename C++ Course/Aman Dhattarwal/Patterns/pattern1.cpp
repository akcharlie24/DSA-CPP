#include<iostream>
using namespace std;
int main(){
    int row, col;
    label:
    cout<<"Please enter ur wish of rows "<<endl;
    cin>>row;
    cout<<"Please enter ur wish of columns"<<endl;
    cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++){
            cout<<"* ";
        }
        cout<<endl;
    }goto label;
      return 0;
}