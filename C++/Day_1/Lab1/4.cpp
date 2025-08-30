#include<iostream>
using namespace std;

// 4. Write a program to accept an integer and check if it is even or odd.


void f4(){

    cout<<"Enter a Number\n";
    int a;
    cin>>a;
    if((a&1)==0) cout<<"Even";
    else cout<<"odd";

}

int main(){

    f4();
}