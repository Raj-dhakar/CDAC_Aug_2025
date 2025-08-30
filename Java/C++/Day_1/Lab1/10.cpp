#include<iostream>
using namespace std;

/*
10:Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3
*/

void f10(){

    cout<<"Enter M and N as M^N \n";

    int m,n;
    cin>>m>>n;

    if(n==0){
        cout<<"Pow :"<<1;
        return;
    }

    int pow=1;
    for(int i=0;i<n;i++) pow*=m;

    cout<<"Pow: "<<pow;
}


int main(){

    f10();
}