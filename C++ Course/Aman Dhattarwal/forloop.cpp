#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Upto what number you wish to add ? "<<endl;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}