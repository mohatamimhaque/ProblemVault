#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
void solve(){
    int n;
    cin>>n;
    vector<ll>vec(n);
    for(auto &it:vec) cin>>it;
    sort(vec.begin(),vec.end());
    ll ans = (vec[0]+vec[1])/2;
    for(ll i=2;i<n;i++) ans = (ans+vec[i])/2;
    cout<<ans<<endl;
}

int main(){
  // init_code();
    long long t,x,sum,n;
    cin >> t;
    string str;

    while (t--) {
        solve();
         
    }

    return 0;
}
