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
    int m=5,n=5,i,j,k,x,y;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cin>>k;
            if(k==1){
                x=i;
                y=j;
            }
        }
    }
    cout<<abs(3-x)+abs(3-y)<<nl;
   
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
