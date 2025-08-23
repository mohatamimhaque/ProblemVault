#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
long long solve() {
    long long n,x,t,ans=0;
    cin>>n>>x>>t;
    long long d = t/x;
    if(x>t){
        ans=0;
    }else if(x==t){
        ans= n-1;
    }else if(d>=n){
        ans = (n*(n-1))/2;
    }else{
        ans = (n-d)*d+(d*(d-1))/2;
    }

    return ans;


}


int main() {
//init_code();
   int t=1;
   cin>>t;
   while(t--){
        cout<<solve()<<endl;
    // solve();
   }
    
    
    return 0;
}
