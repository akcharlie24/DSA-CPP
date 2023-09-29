#include <iostream>
using namespace std;

int main () {

   // Array example 
   int marks[4] = {23,45,56,89};
   
   int mathMarks[4] ;   
   mathMarks[0]=2278;   
   mathMarks[1]=738;   
   mathMarks[2]=378;   
   mathMarks[3]=578;   

   cout<<"These are math marks "<<endl;
   cout<<mathMarks[0]<<endl;
   cout<<mathMarks[1]<<endl;
   cout<<mathMarks[2]<<endl;
   cout<<mathMarks[3]<<endl;

  
   marks[2]=455; // You can change the value of an element in an array
   cout<<"These are marks "<<endl;
   // cout<<marks[0]<<endl; // array me zero se start hoti hai counting
   // cout<<marks[1]<<endl;
   // cout<<marks[2]<<endl;
   // cout<<marks[3]<<endl;

   // Loop ke through kaise print kar sakte hai wo dekhte hai 

   for (int i = 0; i < 4; i++) //This is an easier way to print or take inputs in case of arrays
   {
      cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
   }cout<<endl;
   
   //Quick quiz do the same using while and do while loop
   
   int j=0;
   do
   {
    cout<<"The value of mathMarks "<<j<<" are "<<mathMarks[j]<<endl; 
    j++;
   } while (j<4);
   
   //Aise hi while se bhi kar sakte hai using above code
   
   // POINTERS

   int* p = marks;
   
   cout<<"Marks at element [0] is "<<*p<<endl;      //dereference kar lia p ko then p+1 and so on 
   cout<<"Marks at element [1] is "<<*(p+1)<<endl;  //*(p+1) is the address of marks [1] and so on
   cout<<"Marks at element [2] is "<<*(p+2)<<endl; 
   cout<<"Marks at element [3] is "<<*(p+3)<<endl; 

   // ek tareeka aur hai likhne ka 
   
   cout<<*(p++)<<endl; // matlab hai phle p (value at first block) (i.e. 23) print kar dega then uski (pointer ki) value ek se bdha dega   
   cout<<*p<<endl; // ab p+1 ( 45 ) ki print karega as p ek se badh gaya (updated value) hai upar vali statement se 
   
   cout<<*(++p)<<endl; // ab dekho already p+1 par tha but yaha print karane se phle hi bdha di to seedha p+2 (455) ki value dega
   

   return 0;
};