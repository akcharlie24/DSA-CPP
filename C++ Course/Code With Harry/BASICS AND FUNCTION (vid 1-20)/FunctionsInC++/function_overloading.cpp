#include<iostream>
using namespace std;

// Calculate Volume of a cylinder
float volume (float r , float h){
    return (3.14 * r * r *h);
}

// Calculate Volume of a cuboid
float volume (float l , float b, float h){
    return (l*b*h);
}

// Calculate Volume of a cube
float volume (float a){
    return (a*a*a);
}

int main() {
    cout<<"Volume of cylinder is "<<volume(10.34,5)<<endl;
    cout<<"Volume of cuboid is "<<volume(2,4,5)<<endl;
    cout<<"Volume of cube is "<<volume(10)<<endl;
    return 0;
}