#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(), v.end()
typedef vector<int> vi;
typedef pair<int, int> pii;
const int MOD = 1e9+7;
#define int long long int

bool isPrime(int n){
    int temp = 0;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            temp++;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1) temp++;



    return (temp == 2);
}



void solve() {
    int n;cin>>n;
    int res = 0;
    for(int i=2;i<=n;i++){
        res+=(isPrime(i) == 1);
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
