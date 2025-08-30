#include<iostream>
using namespace std;

/*
7:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.
*/
class Student {
    int rollno;
    int m1, m2, m3;
public:
    void acceptInfo() {
        cout << "Enter rollno and 3 marks: ";
        cin >> rollno >> m1 >> m2 >> m3;
    }
    void display() {
        int total = m1 + m2 + m3;
        float per = total / 3.0;
        char grade;
        if (per >= 75) grade = 'A';
        else if (per >= 50) grade = 'B';
        else grade = 'C';
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << m1 << " " << m2 << " " << m3 << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << per << endl;
        cout << "Grade: " << grade << endl;
    }
};

void f7() {
    Student s;
    s.acceptInfo();
    s.display();
}

int main(){
    f7();
}