#include <iostream>
using namespace std;

/******Structure*****/
typedef struct employee  // typedef lagane se hum short me likh sakte hai struct baar baar nahi likhna padta 
{
    /* data */

    int eId;                                //4   (MEMORY ALLOCATED IN BYTES)
    char favChar;                           //1   (MEMORY ALLOCATED IN BYTES)
    // uska koi favourite character         //4   (MEMORY ALLOCATED IN BYTES)
    float salary;                         
 
    //STRUCTURE me 9 bytes allocate hongi as hume teeno cheeze use karni hai

} ep; //short me ep likh diya struct employee ki jagah 


/*******Union******/   //---------->teeno me se ek baar mai ek
union money    
{
    /* data */
    
    //maan lia barter system hai 
    //ab in teeno me se ek hi cheez use karenge barter me ek baar me   
    
    char car;         //4   (MEMORY ALLOCATED IN BYTES)  
    int rice;         //1   (MEMORY ALLOCATED IN BYTES)
    float pounds;     //4   (MEMORY ALLOCATED IN BYTES)

    //UNION mai keval 4 bytes (max out of all data types included) as hume ek baar mai ek hi store karana hai 

} ;  



int main () {
    //Jo bhi part smjhna ho baaki ko comment out karke dekh lo 
   
    /*****STRUCTURE******/
    ep harry;                  // typedef use karne ka fayda (struct employee harry likhte tab bhi sahi hota)
    struct employee shubham;
    struct employee rohanDas;

    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;

    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
   
    
    /*****UNION*****/
    union money m1;
    m1.rice=34;
    m1.car='c';
    cout<<m1.rice<<endl; // ab yahan rice ki sahi value nhi milegi as car se overwrite ho chuki h 
    cout<<m1.car<<endl;


    /******ENUM(enumeration)******/

    enum Meal { breakfast, lunch, dinner }; 
    // enum ne bas numbering kardi breakfast ko 0 assign kardia, lunch ko 1 and so on , program becomes handy and readable
    Meal M1 = lunch;
    cout<<M1<<endl;
    cout<<(M1==2)<<endl; //False as M1 ko to lunch ke equal kara hai i.e. 1
       
    return 0;
};