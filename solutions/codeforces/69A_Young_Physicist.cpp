#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define lli long long int
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

void solve() {
     int n,i=0,j=0,k=0,a,b,c;
     cin>>n;
     while(n--){
        cin>>a>>b>>c;
        i+=a;
        j+=b;
        k+=c;
     }
     if(i!=0||j!=0||k!=0)no;
     else yes;
    

}

int main() {
    init_code();
    
    int t = 1;
    //cin >> t;

    while (t--) {
       solve();
    }

    return 0;
}
