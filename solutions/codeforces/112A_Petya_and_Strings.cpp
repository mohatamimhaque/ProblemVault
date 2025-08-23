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
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        if(tolower(s1[i])>tolower(s2[i])){
            return 1;
        }else if(tolower(s1[i])<tolower(s2[i])){
            return -1;
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
