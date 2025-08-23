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




void solve() {
    int n,sereja=0,dima=0;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int r=n-1;
    int l=0;
    for(int i=0;i<n;i++){
        if(i&1){
            if(vec[l]>vec[r]){
                dima+=vec[l];
                l++;
            }else{
                dima+=vec[r];
                r--;
            }
        }else{
             if(vec[l]>vec[r]){
                sereja+=vec[l];
                l++;
            }else{
                sereja+=vec[r];
                r--;
            }
        }
    }

    cout<<sereja<<' '<<dima<<nl;


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
