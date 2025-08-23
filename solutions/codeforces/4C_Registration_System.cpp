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
    int n,i;
    cin>>n;
    string str;
    unordered_map<string,int>st;
    for(i=1;i<=n;i++){
        cin>>str;
        if(st[str]==0){
            cout<<"OK"<<nl;
        }else{
            cout<<str<<st[str]<<nl;
        }
        st[str]++;

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
