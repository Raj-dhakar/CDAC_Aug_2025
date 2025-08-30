#include <bits/stdc++.h>
using namespace std;

/*
Create Date class with members day, month, year.
Write no argument and parameterised constructor.
Create two objects and initialize them using no argument and parameterised constructor respectively.
Print date using display function.
*/
class Date {
    int day, month, year;
public:
    Date() : day(1), month(1), year(2000) {}
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    void display() { cout << day << "/" << month << "/" << year << "\n"; }
};

int main() {
    Date d1;
    Date d2(30, 8, 2025);
    d1.display();
    d2.display();
}
