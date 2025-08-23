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

int main(){
   // init_code();
    int t,x,y,n,i,ans;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        ans=((int)((n-y)/x)*x)+y;
        cout<<ans<<endl;
    }
    

}
