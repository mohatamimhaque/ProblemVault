#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(), v.end()
typedef vector<int> vi;
typedef pair<int, int> pii;
const int MOD = 1e9+7;
#define int long long int

int segment(int n){
    vector<int>seg = {6,2,5,5,4,5,6,3,7,6};
    int res = 0;
    while(n){
        res+=seg[n%10];
        n/=10;
    }

    return res;
}



void solve() {
    int a,b;cin>>a>>b;
    int res = 0;
    for(int i=a ;i<=b;i++){
        res+=segment(i);
    }

    cout<<res<<endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--) solve();
}
