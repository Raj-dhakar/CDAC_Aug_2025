#include<iostream>
using namespace std;

/*
8. Write a  program to input angles of a triangle and check whether triangle is valid or not.
*/

void f8(){

    cout<<"Enter 3 angles of triangle \n";

    int a,b,c;
    cin>>a>>b>>c;

    if(a+b+c==180) cout<<"Valid Triangle";
    else cout<<"Not a valid Triangle";
}


int main(){

    f8();
}