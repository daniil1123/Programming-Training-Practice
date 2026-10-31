#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, r1, x2, y2, r2;
    if (!(cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2)) return 0;

    if (x1 == x2 && y1 == y2 && r1 == r2) {
        cout << -1 << endl;
        return 0;
    }

    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if (d > r1 + r2 || d < abs(r1 - r2)) {
        cout << 0 << endl;
    }
    else if (abs(d - (r1 + r2)) < 1e-9 || abs(d - abs(r1 - r2)) < 1e-9) {
        cout << 1 << endl;
    }
    else {
        cout << 2 << endl;
    }

    return 0;
}