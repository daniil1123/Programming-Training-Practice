#include <iostream>
#include <string>
#include <map>

using namespace std;

long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; ++i) {
        res *= i;
    }
    return res;
}

int main() {
    string word;
    if (!(cin >> word)) return 0;

    map<char, int> counts;
    for (char c : word) {
        counts[c]++;
    }

    long long total_fact = factorial(word.length());
    long long denom_fact = 1;

    for (const auto& pair : counts) {
        denom_fact *= factorial(pair.second);
    }

    cout << total_fact / denom_fact << endl;

    return 0;
}