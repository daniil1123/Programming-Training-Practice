#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    if (n == 1) {
        cout << 2 << endl;
        return 0;
    }
    if (n == 2) {
        cout << 4 << endl;
        return 0;
    }
    if (n == 3) {
        cout << 7 << endl;
        return 0;
    }

    const int MOD = 12345;
    vector<int> dp(n + 1);
    dp[1] = 2;
    dp[2] = 4;
    dp[3] = 7;

    for (int i = 4; i <= n; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    cout << dp[n] << endl;

    return 0;
}