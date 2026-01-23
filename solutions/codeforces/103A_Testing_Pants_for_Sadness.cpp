#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define ll long long int
using namespace std;



void solve(int t){
   ll n;cin>>n;
   vector<ll>vec(n);
   for(auto &v:vec){
    cin>>v;
   }
   ll res = 0;

    for(int i=0;i<n;i++){

        res = res + i*(vec[i]-1)+vec[i];
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
