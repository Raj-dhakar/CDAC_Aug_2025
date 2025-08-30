#include <bits/stdc++.h>
using namespace std;

/*
Create a class Point with data members as x, y.
Create Default and Parameterized constructors.
Write getters and setters for all the data members.
Also add the display function.
Create the object of this class in main method and invoke all the methods.
*/
class Point {
    int x,y;
public:
    Point():x(0),y(0){}
    Point(int a,int b):x(a),y(b){}
    void setX(int a){x=a;}
    void setY(int b){y=b;}
    int getX(){return x;}
    int getY(){return y;}
    void display(){ cout<<"("<<x<<","<<y<<")\n"; }
};

int main() {
    Point p1;
    p1.setX(5); p1.setY(7);
    p1.display();
    Point p2(10,20);
    p2.display();
}
