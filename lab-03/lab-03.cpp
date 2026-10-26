#include <iostream>
#include <vector>

using namespace std;

int main() {
    int p;

    if (!(cin >> p)) return 0;

    if (p == 1) {
        cout << 2 << endl;
        return 0;
    }
    if (p == 2) {
        cout << 4 << endl;
        return 0;
    }
    if (p <= 0) {
        cout << "P need to be > 0" << endl;
        return 0;
    }
    vector<long long> dp(p + 1);
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i <= p; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[p] << endl;

    return 0;
}