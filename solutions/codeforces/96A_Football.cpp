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

void solve(){
    string str;
    char c;
    int count  = 0;
    c = '2';
    cin>>str;
    for(auto ch:str){
        if(ch==c){
            count++;
        }else{
            count = 1;
            c=ch;
        }
        if(count>=7){
            yes;
            return;
        }
    }
    no;
    return;
}
int main(){
    init_code();
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}