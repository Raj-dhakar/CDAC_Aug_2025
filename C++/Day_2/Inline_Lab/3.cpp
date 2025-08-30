#include <bits/stdc++.h>
using namespace std;

// Write an inline function to calculate area of a circle (π × r × r, use π = 3.14159).
inline double areaCircle(double r) {
    return 3.14159 * r * r;
}

int main() {
    double r; cin >> r;
    cout << areaCircle(r) << "\n";
}
