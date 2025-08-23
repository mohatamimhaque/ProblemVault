#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,data;
    cin>>n>>k;
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        cin>>data;
        mp[data] = i;
    }
    if(mp.size()>=k){
       cout<<"YES\n";
       int ll = 1;
       for(auto it:mp){
            cout<<it.second<<' ';
            ll++;
            if(ll>k) break;
       }
       return;
    }

    cout<<"NO";
    return;




}

int main(){
    solve();
}
