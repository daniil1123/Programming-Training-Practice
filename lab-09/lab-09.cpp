#include <iostream>
using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;

    long long d = y - x;
    long long steps = 0;
    long long distance = 0;

    while (distance < d) {
        steps++;
        distance += (steps + 1) / 2;
    }

    cout << steps << endl;

    return 0;
}
