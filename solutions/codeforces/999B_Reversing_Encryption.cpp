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
string solve() {
    string str;
    int n;
    cin>>n>>str;
    vector<int> divisors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    for (int d : divisors) {
        reverse(str.begin(), str.begin() + d);
    }
    
    return str;     
}


int main() {
   //init_code();
   int t=1;
  // cin>>t;
   while(t--){
        cout<<solve()<<endl;
   }
    
    
    return 0;
}
