#include<iostream>
using namespace std;

/*
21. Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the 
corresponding operation and displays the result*/

void f21(){
    
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter an operator (+ - * /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    switch(op) {
        case '+': 
            cout << "Result = " << (a + b); 
            break;
        case '-': 
            cout << "Result = " << (a - b); 
            break;
        case '*': 
            cout << "Result = " << (a * b); 
            break;
        case '/': 
            if (b != 0)
                cout << "Result = " << (a / b); 
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Invalid operator!";
    }
}



int main(){

    f21();
}