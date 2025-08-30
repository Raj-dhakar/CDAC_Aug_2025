#include<iostream>
using namespace std;

/*
14:Write a  program to find sum of all even and odd numbers between 1 to n. 
*/

void f14(){

    cout<<"Enter a num\n";

    int num;
    cin>>num;

    int evenSum,oddSum;

    for(int i=1;i<=num;i++){
        if((i&1)==0) evenSum+=i;
        else oddSum+=i;
    }

    cout<<"EvenSum "<<evenSum<<" "<<oddSum;
}

int main(){

    f14();
}