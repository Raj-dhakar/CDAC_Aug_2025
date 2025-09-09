#include<iostream>
using namespace std;

/*
3. Write a program to accept a character, an integer n and display the next n characters.
*/
void f3() {
    char ch;
    int n;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter n: ";
    cin >> n;

    cout << "Next " << n << " characters: ";
    for (int i = 1; i <= n; i++) {
        if(ch>='a' && ch<='z') cout<<(char(((ch+i)%26)+'a'))<<" ";
        else cout<<(char(((ch+i)%26)+'A'))<<" ";
    }
    cout << endl;
}

int main(){
    f3();
}