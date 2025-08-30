#include<iostream>
using namespace std;

/*
5:Write a program to accept array  from user .Accept number from user and search number is present in array or not.
*/
void f5() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    int key;
    cout << "Enter number to search: ";
    cin >> key;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }
    if (found) cout << "Number found in array" << endl;
    else cout << "Number not found" << endl;
}

int main(){
    f5();
}