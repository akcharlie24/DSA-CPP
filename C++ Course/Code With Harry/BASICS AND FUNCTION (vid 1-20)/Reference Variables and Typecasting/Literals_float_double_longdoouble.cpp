#include<iostream>
using namespace std;

int main(){

    //************* float,double,long double, LITERALS ****************
    float d=34.4f; // small ya capital kuch bhi lga sakte ho 
    long double e=34.4l;

    // 34.4 aise likhoge to "by default" c++ isse double leta h 
    // 34.4f aise likhoge to c++ isse float lega   
    // 34.4l aise likhoge to c++ isse long double lega

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;    
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    return 0;
}