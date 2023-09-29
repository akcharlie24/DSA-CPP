#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int a,int b){
            x = a;
            y = b;
        }

        void display (){
            cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
        }

        friend void distance (Point , Point );
}; 

void distance (Point p1, Point p2){
    double dist;
    int diff_x=(p1.x - p2.x);
    int diff_y=(p1.y - p2.y);
    
    dist = sqrt(pow(diff_x,2)+pow(diff_y,2));

    cout<<"The distance between the given two points is = "<<dist<<endl;
}

int main() {
    Point p(0,1) , q(0,5);

    p.display();
    q.display();

    distance(p,q);

    return 0;
}