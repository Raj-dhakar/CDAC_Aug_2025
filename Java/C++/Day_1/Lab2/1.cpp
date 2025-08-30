#include<iostream>
using namespace std;

/*
1:Write a program that accepts numbers continuously as long as the number is positive and prints the 
sum of the given numbers.
*/
void f1() {
    int num, sum = 0;
    cout << "Enter positive numbers (enter negative to stop):\n";
    while (true) {
        cin >> num;
        if (num < 0) break;
        sum += num;
    }
    cout << "Sum = " << sum << endl;
}

int main(){
    f1();
}