#include<iostream>
using namespace std;

/*
3:. Write a  program to find sum of all even and odd numbers between 1 to n. 
*/
void f3() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int evenSum = 0, oddSum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) evenSum += i;
        else oddSum += i;
    }
    cout << "Even Sum = " << evenSum << endl;
    cout << "Odd Sum = " << oddSum << endl;
}

int main(){
    f3();
}