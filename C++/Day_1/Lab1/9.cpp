#include<iostream>
using namespace std;

/*
9:Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120
*/

void f9(){

    int fact=1;

    int n;
    cout<<"Enter a num to find factorial\n";
    cin>>n;

    for(int i=1;i<=n;i++) fact*=i;

    cout<<"Faactorial :"<<fact;
}


int main(){

    f9();
}