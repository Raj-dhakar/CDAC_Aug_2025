#include<iostream>
using namespace std;

/*
4:. Write a  program to print all Prime numbers between 1 to n. 
*/
void f4() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Prime numbers from 1 to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        bool prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) cout << i << " ";
    }
    cout << endl;
}

int main(){
    f4();
}