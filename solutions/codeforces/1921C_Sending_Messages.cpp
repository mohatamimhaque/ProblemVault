#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define nl "\n"
using namespace std;
ll bigMod(ll b,ll p){
    ll res=1;
    while(p){
        if(p&1) res=(res*b)%mod;
        b=(b*b)%mod;
        p>>=1;
    }
    return res%mod;
 }   
void solve(){
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    ll vec[n+1];
    vec[0]=0;
    for(ll i=1;i<=n;i++){
        cin>>vec[i];
    }
    int x=0;
    for(ll i=1;i<=n;i++){
       // f-=min(b,(vec[i]-vec[i-1])*a);
        f -= min(a * (vec[i] - vec[i-1]), b);
    }
    if(f>0){
            cout<<"YES\n";
            return;
        }
    cout<<"NO\n";      
    
    
     
 }   
    
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }    
     return 0;
}