#include<iostream>
using namespace std;

/*
 7. Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
(Hint: a, e, i, o, u are vowels)
*/

void f7(){

    cout<<"Enter a LowerCase Character \n";

    char ch;
    cin>>ch;

    if(ch>='a' && ch<='z'){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') cout<<"Vowel ";
    else cout<<"Consonent";
    }
    else cout<<"Not a Lowercase";
}

int main(){

    f7();
}