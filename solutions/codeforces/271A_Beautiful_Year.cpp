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

int solve() {
    int n;
    cin>>n;
    while(true){
        n++;
        int i=n;
        map<int,int>mp;
        while(i>0){
            mp[i%10]++;
            i/=10;
        }
        if(mp.size()==4){
            return n;
        }
    }
    
    
    return 0;
}

int main() {
    init_code();
    
    int t = 1;
    //cin >> t;
    
    while (t--) {
        cout<<solve()<<endl;
    }

    return 0;
}
