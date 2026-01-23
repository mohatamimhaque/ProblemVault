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

void solve(){
    int n,i=1,temp,x=0;
    cin>>n;
    while(x>-n && x<n){
         temp = 2*i-1;
        if(i&1){
            x-=temp;
        }else{
            x+=temp;
        }
        i++;
    }
    if(i%2){
        cout<<"Sakurako"<<endl;
        return;
    }
    cout<<"Kosuke\n";
    return;
}
int main(){
    init_code();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}