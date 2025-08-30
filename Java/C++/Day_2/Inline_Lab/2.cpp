#include <bits/stdc++.h>
using namespace std;

// Write an inline function to calculate area of a rectangle (length × breadth).
inline int areaRectangle(int l, int b) {
    return l * b;
}

int main() {
    int l,b; cin >> l >> b;
    cout << areaRectangle(l,b) << "\n";
}
