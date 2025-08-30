#include <bits/stdc++.h>
using namespace std;

/*
Create Employee class with members id(int), name(string), dob(Date).
Use above created Date class.
Write default and parameterised constructor in Employee Class.
Write accept() function to accept information and display() to display emp information.
*/
class Date {
    int day, month, year;
public:
    Date():day(1),month(1),year(2000){}
    Date(int d,int m,int y):day(d),month(m),year(y){}
    void accept() { cin >> day >> month >> year; }
    void display() { cout << day << "/" << month << "/" << year; }
};

class Employee {
    int id;
    string name;
    Date dob;
public:
    Employee():id(0),name(""),dob(){}
    Employee(int i,string n,Date d):id(i),name(n),dob(d){}
    void accept() {
        cin >> id >> name;
        dob.accept();
    }
    void display() {
        cout << "ID: " << id << " Name: " << name << " DOB: ";
        dob.display();
        cout << "\n";
    }
};

int main() {
    Employee e1;
    e1.accept();
    e1.display();
    Date d(15,8,2002);
    Employee e2(102,"Raj",d);
    e2.display();
}
