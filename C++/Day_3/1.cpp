#include <bits/stdc++.h>
using namespace std;

/*
Write a program to create student class with data members rollno, marks1, mark2, mark3.
Accept data (acceptInfo()) and display using display member function.
Also display total, percentage and grade.
*/
class Student {
    int rollno, m1, m2, m3;
public:
    void acceptInfo() {
        cin >> rollno >> m1 >> m2 >> m3;
    }
    void display() {
        int total = m1 + m2 + m3;
        double perc = total / 3.0;
        char grade;
        if(perc >= 75) grade='A';
        else if(perc >= 60) grade='B';
        else if(perc >= 40) grade='C';
        else grade='F';
        cout << rollno << " " << m1 << " " << m2 << " " << m3 << "\n";
        cout << "Total=" << total << " Percentage=" << perc << " Grade=" << grade << "\n";
    }
};

int main() {
    Student s;
    s.acceptInfo();
    s.display();
}
