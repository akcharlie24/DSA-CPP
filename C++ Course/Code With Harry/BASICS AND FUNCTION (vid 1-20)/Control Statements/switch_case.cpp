#include<iostream>
using namespace std;

int main (){
    //*****Selection control statement- switch case***** 
    int age;
    cout<<"Tell your age ";
    cin>>age;
    switch (age)
    {
    
    case 18:
        cout<<"You are 18 "<<endl;
        break; //iska matlab jaha par ho usko todd kr bahar nikal jaao & AGAR break nhi lagaya to iske ( jo match kregi ) baad wali saari switch statements print krega
    case 22:
        cout<<"You are 22 "<<endl;
        break;  
    case 2:
        cout<<"You are 2 "<<endl;
        break;  
    default:
        cout<<"No special cases "<<endl;
        break;
    }
    return 0;
}