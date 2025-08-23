#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main() {
   // init_code();
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int operations = 0;

        if (k == 1) {
            operations = n;
        } else {
            while (n > 0) {
                operations += (n % k); 
                n /= k;
            }
        }

        cout << operations << endl;
    }

    return 0;
}
