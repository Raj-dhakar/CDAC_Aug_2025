#include<iostream>
using namespace std;

/*
18:Write a program to find greatest of three numbers using nested if-else.
*/

void f18(){

    cout<<"Enter 3 numbers \n";

    int a,b,c;
    cin>>a>>b>>c;

    int large=a;

    if(large<b){
        large=b;
        if(large<c) large=c;
    }
    else if(large<c)
     large=c;
    

    cout<<"Largest number out of 3 given number is :"<<large;
}
int main(){

    f18();
}