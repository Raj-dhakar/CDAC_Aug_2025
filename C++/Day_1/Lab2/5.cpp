#include<iostream>
using namespace std;

/*
5. Write a program to calculate factors of a given number.
*/
void f5() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factors of " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cout << i << " ";
    }
    cout << endl;
}

int main(){
    f5();
}