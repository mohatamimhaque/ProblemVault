#include<bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

}
void solve(){
    int n;
    cin>>n;
    int a,b,n0=0,n1=0,x=n;
    while(x--){
        cin>>a>>b;
        n0+=(a==0);
        n0+=(b==0);
        n1+=(a==1);
        n1+= (b==1);
    }
    if(n0==2*n || n1==2*n){
        cout<<0<<' '<<0<<'\n';
        return;
    }
    int mi = 0,ma=min(n0,n1);
    if(n1&1) mi=1;
    cout<<mi<<' '<<ma<<'\n';

}

int main(){
    init_code();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}