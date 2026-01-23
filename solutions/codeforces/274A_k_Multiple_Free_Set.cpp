#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define ll long long int
using namespace std;



void solve(int t){
   ll n,k;cin>>n>>k;
   vector<ll>vec(n);
   for(auto &v:vec){
    cin>>v;
   }
   sort(vec.rbegin(),vec.rend());
   map<ll,ll>mp;
   ll res = 0;
   for(auto v:vec){
        if(mp[v*k]){
            continue;
        }
        mp[v]++;
        res++;
   }

   cout<<res<<nl;

}

int main(){
    fast_io;
    int t=1;
    //cin>>t;
    int i = 1;
    while(i<=t){
        solve(i);
        i++;
    }
}
