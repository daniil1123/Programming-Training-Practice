#include <iostream>
using namespace std;

int main() {
    int n;

    if (!(cin >> n)) {
        cout << "invalid input";
        return 0;
    }

    if (n <= 0) {
        cout << "the number must be positive";
        return 0;
    }

    int count = 0;

    for (int m = 1; m <= n; ++m) {
        if (n / m == n % m) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
