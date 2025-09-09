/*
Assignment 1:
Create an application for storing int values in vector.
Create menu driven app for following menu:
1:add  2:show all  3:search  4:sort  5:reverse  6:clear
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int choice, val;

    do {
        cout << "\nMenu: 1.Add 2.Show All 3.Search 4.Sort 5.Reverse 6.Clear 7.Exit\n";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                v.push_back(val);
                break;
            case 2:
                cout << "Values: ";
                for (int x : v) cout << x << " ";
                cout << endl;
                break;
            case 3:
                cout << "Enter value to search: ";
                cin >> val;
                if (find(v.begin(), v.end(), val) != v.end())
                    cout << "Found!" << endl;
                else
                    cout << "Not Found!" << endl;
                break;
            case 4:
                sort(v.begin(), v.end());
                cout << "Sorted." << endl;
                break;
            case 5:
                reverse(v.begin(), v.end());
                cout << "Reversed." << endl;
                break;
            case 6:
                v.clear();
                cout << "All cleared." << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}
