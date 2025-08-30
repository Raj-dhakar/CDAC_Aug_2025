#include<iostream>
using namespace std;

/*
12:Sum of series :
	1+2+3+….+n
*/

int f12(){

    cout<<"Enter a number\n";

    int num;
    cin>>num;

    cout<<"Sum of num from 1 to n :"<<(num*(num+1)/2);

    return 0;
}


int main(){

    f12();
}