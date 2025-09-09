/*
Assignment 4:
Create an application using map for storing key and value.
Key:int , Value:Account
Account class with actid,name,balance
Menu:
1:Add Account
2:Display all
3:Search by id
4:Remove all
*/

#include <iostream>
#include <map>
using namespace std;

class Account {
    int actid;
    string name;
    double balance;
public:
    Account(int id=0,string n="",double b=0):actid(id),name(n),balance(b){}
    int getId(){ return actid; }
    void display() {
        cout<<"ID:"<<actid<<" Name:"<<name<<" Balance:"<<balance<<endl;
    }
};

int main() {
    map<int, Account> accs;
    int choice,id;
    string name;
    double bal;

    do {
        cout << "\nMenu:1.Add 2.DisplayAll 3.Search 4.RemoveAll 5.Exit\n";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter id,name,balance: ";
                cin >> id >> name >> bal;
                accs[id] = Account(id,name,bal);
                break;
            case 2:
                for (auto &p : accs) p.second.display();
                break;
            case 3:
                cout << "Enter id to search: ";
                cin >> id;
                if (accs.find(id) != accs.end()) accs[id].display();
                else cout << "Not found\n";
                break;
            case 4:
                accs.clear();
                cout<<"All removed"<<endl;
                break;
        }
    } while (choice != 5);
    return 0;
}
