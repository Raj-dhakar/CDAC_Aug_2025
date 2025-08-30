#include<iostream>
using namespace std;

/*
17:Write a program to check entered number is Armstrong number or not.
*/

void f17(){

    cout<<"Enter a number \n";
    int n;
    cin>>n;

    int sum=0,num=n;
    while(n>0){
        sum+=(n%10)*(n%10)*(n%10);
        n/=10;
    }

    if(sum==num) cout<<num<<" is a Armstrong number ";
    else cout<<"Not an Armstrong Number ";
}

int main(){

    f17();
}