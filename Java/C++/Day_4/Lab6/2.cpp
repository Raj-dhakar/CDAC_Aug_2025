#include <bits/stdc++.h>
using namespace std;

/*
Create cpp application for bank account handling.

2.1 Create a class BankAccount with members:
   acctNo(int), customerName(string), balance(double)
   Add constructors (accept all details).

2.2 Business methods:
   withdraw(double amt)
   deposit(double amt)

2.3 Create object of account class and test withdraw and deposit methods.
*/
class BankAccount{
    int acctNo;
    string customerName;
    double balance;
public:
    BankAccount(int a,string n,double b):acctNo(a),customerName(n),balance(b){}
    void deposit(double amt){
        balance+=amt;
        cout<<"Deposited "<<amt<<" New Balance="<<balance<<"\n";
    }
    void withdraw(double amt){
        if(amt<=balance){
            balance-=amt;
            cout<<"Withdrawn "<<amt<<" New Balance="<<balance<<"\n";
        } else cout<<"Insufficient Balance\n";
    }
    void display(){ cout<<"Acct:"<<acctNo<<" Name:"<<customerName<<" Balance:"<<balance<<"\n"; }
};

int main(){
    BankAccount acc(101,"Raj",5000);
    acc.display();
    acc.deposit(2000);
    acc.withdraw(3000);
    acc.withdraw(5000);
}
