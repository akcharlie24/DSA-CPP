/* This code is not correct but i will 
definitely find the solution */
#include<iostream>
using namespace std;
int main(){
    int n;
    long int fact=1;
    cout<<"Please Enter The Number ";
    cin>>n;
    if(n<0){
        cout<<"Invalid as the number is negative ";
    }else if(n==0){
    cout<<fact;
    }else{
     for (int i = 1; i <= n; i++)
     {
         fact=fact*i;
     }
     cout<<"Factorial of "<<n<<" is "<<fact;
    }
    return 0;
}