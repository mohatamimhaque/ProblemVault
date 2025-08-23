#include<bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    //init_code();
    int q;
    cin >> q;
    
    while (q--) {
        string s, t;
        cin >> s >> t;

        bool common=false;

        for(auto ch:t){
            if(s.find(ch) != string::npos){
                common=true;
                break;
            }
        }
        
        if (common) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
    
}
