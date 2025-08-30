/*
Assignment 3:
Create an application using set.
Accept name of city from user and store in set.
Menu:
1:add city
2:display all cities
3:search city
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> cities;
    int choice;
    string city;

    do {
        cout << "\nMenu: 1.AddCity 2.DisplayAll 3.Search 4.Exit\n";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter city: ";
                cin >> city;
                cities.insert(city);
                break;
            case 2:
                for (auto &c : cities) cout << c << " ";
                cout << endl;
                break;
            case 3:
                cout << "Enter city to search: ";
                cin >> city;
                if (cities.find(city) != cities.end())
                    cout << "Found" << endl;
                else
                    cout << "Not Found" << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
