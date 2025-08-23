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
    int u=0,l=0;
    string str;
    cin>>str;
    for(auto ch:str){
        if(ch>='A' && ch<='Z'){
            u++;
        }else{
            l++;
        }
    }
    if(u>l){
        transform(str.begin(),str.end(),str.begin(),::toupper);
    }else{
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }
    cout<<str<<nl;
   
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
