#include<iostream>
using namespace std;

int main (){

    // Refer to CPP Refernce Operator Precedence website 
    int a = 3, b=4 ;
    int c=((((a*5)+b)-45)+87) ;// left to right associativity h to left to right chalega uss hisaab se bracket laga diye h (inner se outer bracket pdhlo smjhne ke liy)   
    cout<<c;
    return 0;
}