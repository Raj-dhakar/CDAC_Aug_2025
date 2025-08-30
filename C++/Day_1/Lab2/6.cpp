#include<iostream>
using namespace std;

/*
6. Accept two numbers and calculate GCD of them.
*/
void f6() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "GCD = " << a << endl;
}

int main(){
    f6();
}