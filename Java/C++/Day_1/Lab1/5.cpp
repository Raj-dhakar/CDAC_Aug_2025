#include<iostream>
using namespace std;

// 5. Write a program to accept a number and check if it is divisible by 5 and 7.

void f5(){

    cout<<"Enter a Number \n";

    int a;
    cin>>a;

    if(a%5==0  && a%7==0) cout<<"Yes";
    else cout<<"No";
}

int main(){

    f5();
}