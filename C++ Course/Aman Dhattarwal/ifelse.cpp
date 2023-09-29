#include<iostream>
//IN this code I have used too many lines just to beautify the code
using namespace std;
int main ()
{     
    float budget;
    cout<<"Please enter your budget "<<endl;
    cin>>budget;
    if(budget>5000)
    {
       if (budget>10000)
       {
        cout<<"Roadtrip with Neha \n";
       }
        else
        {
           cout<<"Shopping With Neha";
        }
       
    } else if (budget>2000)
     {
        cout<<"Go with Rashmi \n";
     } 
     else 
     {
        cout<<"Go with friendsss \n";
     }
    return 0;
}    

