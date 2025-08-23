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
    int n,m,i;
    cin>>n>>m;
    string a,b;
    unordered_map<string,string>st;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        st[b] = a;
    }
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        b.pop_back();
        cout<<a<<' '<<b<<"; #"<<st[b]<<nl;
    }
}

int main() {
    init_code();
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
