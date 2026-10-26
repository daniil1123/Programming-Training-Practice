#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

int main() {
    int p;
    if (!(cin >> p)) return 0;

    if (p < 2 || p > 20) {
        cout << "error: p must be between 2 and 20" << endl;
        return 1;
    }

    vector<long long> numbers(p);
    for (int i = 0; i < p; ++i) {
        cin >> numbers[i];
    }

    long long result = numbers[0];
    for (int i = 1; i < p; ++i) {
        result = lcm(result, numbers[i]);
    }

    cout << "LCM: " << result << endl;

    return 0;
}