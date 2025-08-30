#include<iostream>
using namespace std;

/*
2. Write a program to accept two integers x and n and compute x raised to n.
*/
void f2() {
    int x, n, result = 1;
    cout << "Enter x and n: ";
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    cout << x << "^" << n << " = " << result << endl;
}

int main(){
    f2();
}