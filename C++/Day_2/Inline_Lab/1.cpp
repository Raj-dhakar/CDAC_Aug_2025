#include <bits/stdc++.h>
using namespace std;

// Write an inline function to calculate area of a square (side × side).
inline int areaSquare(int side) {
    return side * side;
}

int main() {
    int s; cin >> s;
    cout << areaSquare(s) << "\n";
}
