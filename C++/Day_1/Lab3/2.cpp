#include<iostream>
using namespace std;

/*
2: Write a program to Accept a number and display its sum of digits.:ex 568    5+6+8
*/
void f2() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of digits = " << sum << endl;
}

int main(){
    f2();
}