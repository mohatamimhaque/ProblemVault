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
    int vec[n];
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int a=0,b=0,l=0,r=n-1,i=1;
    
    while(l<=r){
        if(i&1){
            if(vec[l]>vec[r]){
                a+=vec[l++];
            }else{
                a+=vec[r--];
            }
        }else{
            if(vec[l]>vec[r]){
                b+=vec[l++];
            }else{
                b+=vec[r--];
            }
        }  
        i++;      
    
    }
    cout<<a<<' '<<b<<nl;    
    
    
     
 }   
    
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }    
     return 0;
}