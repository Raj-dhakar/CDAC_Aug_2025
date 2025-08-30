#include<iostream>
using namespace std;

/*
11:Check if number is a prime number or not.: 
*/

void f11(){

    cout<<"Enter a Prime Number \n";

    int num;
    cin>> num;

    if(num<2) {
        cout<<"Not a Prime \n";
        return;
    }

    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            cout<<"Not a Prime ";
            return ;
        }
    }

    cout<<"Prime";
}


int main(){

    f11();
}