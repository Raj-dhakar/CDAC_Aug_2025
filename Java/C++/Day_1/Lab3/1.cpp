#include<iostream>
using namespace std;

/*
1:Write a program to create an array of integers and perform following operations on that array like 
finding the sum, average, maximum and minimum number in that array. Accept the numbers of the 
array from user.
*/
void f1() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    int sum = 0, mx = arr[0], mn = arr[0];
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > mx) mx = arr[i];
        if (arr[i] < mn) mn = arr[i];
    }
    cout << "Sum = " << sum << endl;
    cout << "Average = " << (double)sum / n << endl;
    cout << "Max = " << mx << endl;
    cout << "Min = " << mn << endl;
}

int main(){
    f1();
}