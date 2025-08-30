#include<iostream>
using namespace std;

/*
7. Write a menu driven program to do following operations :
a) Compute area of circle
b) Compute area of rectangle
c) Compute area of triangle
d) Exit
Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
operation. Continue this process until user selects exit option.*/
void f7() {
    int choice;
    do {
        cout << "\n--- Area Calculator ---\n";
        cout << "1. Area of Circle\n";
        cout << "2. Area of Rectangle\n";
        cout << "3. Area of Triangle\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double r;
                cout << "Enter radius: ";
                cin >> r;
                cout << "Area of circle = " << 3.14159 * r * r << endl;
                break;
            }
            case 2: {
                double l, w;
                cout << "Enter length and width: ";
                cin >> l >> w;
                cout << "Area of rectangle = " << l * w << endl;
                break;
            }
            case 3: {
                double b, h;
                cout << "Enter base and height: ";
                cin >> b >> h;
                cout << "Area of triangle = " << 0.5 * b * h << endl;
                break;
            }
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);
}

int main(){
    f7();
}