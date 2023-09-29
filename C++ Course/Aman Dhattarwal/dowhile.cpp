#include<iostream>
using namespace std;
int main (){
    float n;
    cout<<"Please Enter The Number "<<endl;
    cin>>n;
    do
    {
        cout<<n<<endl;
        cout<<"Please Enter The Number";
        cin>>n;
    } while (n>=0);
    return 0;
}