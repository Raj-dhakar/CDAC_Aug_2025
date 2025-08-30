#include<iostream>
using namespace std;

/*
15: Write a  program to enter a number and print its reverse.
*/

void f15(){

    cout<<"Enter a num\n";
    int num;

    cin>>num;
    int rev=0;
    while(num>0){
        rev=rev*10+(num%10);
        num/=10;
    }

    cout<<"Reverse of number :"<<rev;
}

int main(){

    f15();
}