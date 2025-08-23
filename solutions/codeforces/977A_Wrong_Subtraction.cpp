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
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        if(n%10==0){
            n/=10;
        }else{
            n--;
        }
    }
    cout<<n<<nl;
   
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
