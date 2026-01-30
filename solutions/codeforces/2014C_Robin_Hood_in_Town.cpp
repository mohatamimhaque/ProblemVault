#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        long long S = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            S += a[i];
        }

        // If only one person, impossible
        if (n < 3) {
            cout << -1 << "\n";
            continue;
        }

        sort(a.begin(), a.end());

        // k-th unhappy person (0-based index)
        long long Ak = a[n / 2];

        // Apply formula
        long long X = max(0LL, 2LL * n * Ak - S + 1);

        cout << X << "\n";
    }

    return 0;
}
