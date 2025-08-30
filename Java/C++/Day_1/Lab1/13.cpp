#include<iostream>
using namespace std;

/*
13:Check whether the number is palindrome or not?

*/

void f13(){

    cout<<"Enter a Number \n";

    int num;
    cin>>num;

    int rev=0,val=num;
    while(num>0){
        rev=rev*10+(num%10);
        num/=10;
    }

    if(val==rev) cout<<"Palindrome";
    else cout<<"Not Plindrome ";
}


int main(){

    f13();
}