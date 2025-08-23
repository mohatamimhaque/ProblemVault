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
    int n;
    cin>>n;
    if(n<=2){
        cout<<0<<nl;
        return;
    }
    if(!(n&1)){
        n--;
    }
    cout<<n/2<<nl;


   
}

int main() {
    init_code();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
