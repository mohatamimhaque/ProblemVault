#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
void solve(){
    char a,b,c;
    cin>>a>>b>>c;
    cout<<(a - '0')+(c- '0')<<endl;
}

int main(){
    //init_code();
    long long t,x,sum,n;
    cin >> t;
    string str;

    while (t--) {
        solve();
         
    }

    return 0;
}
