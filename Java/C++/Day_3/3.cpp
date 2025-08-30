#include <bits/stdc++.h>
using namespace std;

/*
Create a class Date with data members as dd, mm, yy.
Write getters and setters for all the data members.
Also add the display function.
Create Default and Parameterized constructors.
Create the object of this class in main method and invoke all the methods.
*/
class Date {
    int dd,mm,yy;
public:
    Date():dd(0),mm(0),yy(0){}
    Date(int d,int m,int y):dd(d),mm(m),yy(y){}
    void setDay(int d){dd=d;}
    void setMonth(int m){mm=m;}
    void setYear(int y){yy=y;}
    int getDay(){return dd;}
    int getMonth(){return mm;}
    int getYear(){return yy;}
    void display(){ cout<<dd<<"/"<<mm<<"/"<<yy<<"\n"; }
};

int main() {
    Date d1;
    d1.setDay(30); d1.setMonth(8); d1.setYear(2025);
    d1.display();
    Date d2(1,1,2000);
    d2.display();
}
