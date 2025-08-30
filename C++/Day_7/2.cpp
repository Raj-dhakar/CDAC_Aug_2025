/*
Assignment 2:
Create an application for storing user information in vector.
(Hint: User class with data member userid,name,email,pwd)
Menu:
1:add user
2:display all users
3:search user
4:change pwd
5:delete all
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class User {
    int userid;
    string name, email, pwd;
public:
    User(int id, string n, string e, string p) : userid(id), name(n), email(e), pwd(p) {}
    int getId() { return userid; }
    string getEmail() { return email; }
    void setPwd(string p) { pwd = p; }
    void display() {
        cout << "ID:" << userid << " Name:" << name << " Email:" << email << endl;
    }
};

int main() {
    vector<User> users;
    int choice, id;
    string name, email, pwd;

    do {
        cout << "\nMenu: 1.Add 2.Display 3.Search 4.ChangePwd 5.DeleteAll 6.Exit\n";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter id,name,email,pwd: ";
                cin >> id >> name >> email >> pwd;
                users.push_back(User(id, name, email, pwd));
                break;
            case 2:
                for (auto &u : users) u.display();
                break;
            case 3:
                cout << "Enter id to search: ";
                cin >> id;
                for (auto &u : users) if (u.getId() == id) u.display();
                break;
            case 4:
                cout << "Enter id & new pwd: ";
                cin >> id >> pwd;
                for (auto &u : users) if (u.getId() == id) u.setPwd(pwd);
                break;
            case 5:
                users.clear();
                cout << "All users deleted." << endl;
                break;
        }
    } while (choice != 6);

    return 0;
}
