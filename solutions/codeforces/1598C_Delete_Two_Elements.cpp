#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define lli long long int
#define nl '\n'
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

lli solve() {
    lli n, sum = 0, ans = 0;
    cin >> n; 
    vector<lli> a(n);
    for(auto &i : a) {
        cin >> i;
        sum += i;
    }
    
    if ((2 * sum) % n != 0) return 0;
    
    lli target = (2 * sum) / n;
    map<lli, lli> freq;
    
    for (lli j = 0; j < n; ++j) {
        lli complement = target - a[j];
        ans += freq[complement]; 
        ++freq[a[j]];  
    }
    
    return ans;
}

int main() {
    init_code();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        cout << solve() << nl;
    }

    return 0;
}
