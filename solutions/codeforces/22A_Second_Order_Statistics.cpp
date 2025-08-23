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
    int n,m,i;
    int p;
    set<int>st;
    cin>>p;
    for(i=1;i<=p;i++){
        cin>>m;
        st.insert(m);
    }
    if(st.size()==1) {
        cout<<"NO"<<nl;
        return;
    }
    auto it = st.begin();
    it++;
    cout<<*it<<nl; 
   
}

int main() {
    init_code();
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
