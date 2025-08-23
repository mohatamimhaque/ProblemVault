#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define lli long long int
#define nl '\n'
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

string solve() {
    string ans="",str;
    char ch;
    int n;
    cin>>n>>str;
    ch=str[0];
    for(int i=1;i<n;i++){
        if(str[i]==ch){
            ans+=ch;
            i++;
            ch = str[i];
        }
    }
    return ans;
}

int main() {
    init_code();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        cout << solve() << nl;
    }

    return 0;
}
