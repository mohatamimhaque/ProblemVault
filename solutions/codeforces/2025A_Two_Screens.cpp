#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define lli long long int
#define ll long long
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void solve() {
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    
    int common = 0;
    while (common < n && common < m && s[common] == t[common]) {
        common++;
    }
    
    int result = n+m+1-common;
    if(s[0] != t[0]) result--;
    cout<< result<<nl;


}

int main() {
    init_code();
    
    int t = 1;
    cin >> t;

    while (t--) {
       solve();
    }

    return 0;
}
