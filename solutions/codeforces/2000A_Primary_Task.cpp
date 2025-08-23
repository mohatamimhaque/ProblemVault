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
    string str;
    cin>>str;
   
    if(str.size()>=3){
        if(str.substr(0,2)=="10" && stoi(str.substr(2))>=2 && str[2]!='0'){
            yes;
            return;
        }
    }

    no;
    return;


}

int main() {
    init_code();
    
    int t = 1;
    cin >> t;

    while (t--) {
       solve();
    }

    return 0;
}
