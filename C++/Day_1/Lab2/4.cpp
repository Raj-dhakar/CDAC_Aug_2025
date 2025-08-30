#include<iostream>
using namespace std;

/*
4. Write a program to calculate factorial of a number. 
For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120*/
void program4() {
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial of " << n << " = " << fact << endl;
}

int main(){
    program4();
}