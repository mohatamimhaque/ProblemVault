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
    int a,b;
    cin>>a>>b;
    cout<<(a<b?a:b)<<' '<<(a>b?a:b)<<endl;
}


int main(){
  //init_code();
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}