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
    int x,y,a,b;
    cin>>x>>y;
    vector<int>vec(x),pre(x+1,0);
    cin>>vec;
    auto lambda = [](int a,int b){
        return a>b;
    };
    sort(vec.begin(),vec.end(),lambda);
    for(int i=1;i<=x;i++){
        pre[i] = vec[i-1]+pre[i-1];
    }
    while(y--){
        cin>>a>>b;
        cout<<pre[a]-pre[a-b]<<nl;
    }
    

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
