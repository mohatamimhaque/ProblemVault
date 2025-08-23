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
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    int v=0;
    for(auto ch:a){
        if(ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            v++;
        }
    }
    if(v!=5){
        no;return;
    }
    v=0;
    for(auto ch:b){
        if(ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            v++;
        }
    }
    if(v!=7){
        no;return;
    }
    v=0;
    for(auto ch:c){
        if(ch == 'a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u'){
            v++;
        }
    }
    if(v!=5){
        no;return;
    }


    yes;


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
