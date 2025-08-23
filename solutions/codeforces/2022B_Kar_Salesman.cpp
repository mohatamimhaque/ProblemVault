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
       long long n,m=0, x,sum=0,d; 
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            cin >> d;
            m = max(m,d);
            sum+=d;
        }
        cout<<max(m,(sum+x-1)/x)<<nl;
       
        return ;


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
