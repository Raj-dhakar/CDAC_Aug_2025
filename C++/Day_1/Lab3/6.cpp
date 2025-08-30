#include<iostream>
using namespace std;

/*
6:Write a program to print following pattern.
*
* *
* * *
* * * *
* * * * *
*/
void f6() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
}

int main(){
    f6();
}