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
    int n,h=0;
    cin>>n;
    int d;
    while(n--){
        cin>>d;
        h+=d;
    }
    if(h){
        cout<<"HARD\n";
    }else{
        cout<<"EASY\n";
    }        
     
 }   
    
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }    
     return 0;
}