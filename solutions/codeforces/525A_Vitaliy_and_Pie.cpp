#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
long long solve() {
    int n;
     string str;
    cin >> n >> str;
        
    unordered_map<char, int> key_count;
    int keys_to_buy = 0;
    
    for (int i = 0; i < str.length(); ++i) {
        if (i % 2 == 0) {
            key_count[str[i]]++;
        } else {
            char required_key = tolower(str[i]); 
            if (key_count[required_key] > 0) {
                key_count[required_key]--;
            } else {
                keys_to_buy++;
            }
        }
    }
    
    return keys_to_buy ;

}


int main() {
   //init_code();
   int t=1;
   //cin>>t;
   while(t--){
        cout<<solve()<<endl;
   }
    
    
    return 0;
}
