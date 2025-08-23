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
template <class T>
void print(const T& a) {
    for (const auto& d : a) {
        cout << d << ' ';
    }
    cout <<nl;
}
void solve(){
    int b=INT_MAX,c=0,n,ans=0,d;
    cin>>n;
    int x=n;
    while(n--){
        cin>>d;
        b=min(b,d);
        c=max(c,d);
    }
    cout<<(c-b)*(x-1)<<nl;
}
int main() {
    init_code();

    int t;
    cin >> t;

    while (t--) {
       solve();
    }

    return 0;
}