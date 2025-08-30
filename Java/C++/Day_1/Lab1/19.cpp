#include<iostream>
using namespace std;

/*
19:Create menu driven program for Pizza Shop.And display total amount,
*/

void f19(){

    int choice, qty;
    double total = 0;
    bool running = true;

    while (running) {
        cout << "\n====== Pizza Shop Menu ======\n";
        cout << "1. Margherita Pizza (₹250)\n";
        cout << "2. Farmhouse Pizza  (₹350)\n";
        cout << "3. Veggie Pizza     (₹300)\n";
        cout << "4. Cheese Burst     (₹400)\n";
        cout << "5. Exit and Print Bill\n";
        cout << "============================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter quantity: ";
                cin >> qty;
                total += 250 * qty;
                break;
            case 2:
                cout << "Enter quantity: ";
                cin >> qty;
                total += 350 * qty;
                break;
            case 3:
                cout << "Enter quantity: ";
                cin >> qty;
                total += 300 * qty;
                break;
            case 4:
                cout << "Enter quantity: ";
                cin >> qty;
                total += 400 * qty;
                break;
            case 5:
                running = false;
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }

    cout << "\n======= BILL =======\n";
    cout << "Total Amount: " << total << endl;
    cout << "====================\n";
    cout << "Thank you! Visit again :)\n";
}

int main(){

    f19();
}