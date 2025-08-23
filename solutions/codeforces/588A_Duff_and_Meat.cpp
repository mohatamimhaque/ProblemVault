#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define mod 1000000007
#define int long long int
#define uint unsigned long long
using namespace std;

template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }

void solve(int t){
    int n,a,b,mn=INT_MAX,res=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        mn = min(b,mn);
        res+=(a*mn);
    }
    cout<<res<<nl;

}

int32_t main(){
    fast_io;
    //init_code();
    int t = 1,i=1;
    //cin >> t;
    while (i<=t){
        solve(i++);
    }
    return 0;
}
