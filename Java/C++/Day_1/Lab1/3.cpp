#include<iostream>
using namespace std;

// 3. Write a program to swap two numbers.

void f3(){

    int a=1,b=2;
    int c;

    c=a;
    a=b;
    b=c;

    cout<<a<<" "<<b;
}

int main(){

    f3();
}