#include<iostream>
using namespace std;

/*
8. Write a program to print all prime numbers between 1 to n
*/
void f8() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << i << " ";
    }
    cout << endl;
}

int main(){
    f8();
}