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
    int t, n;
    cin>>n;

   if(n%2 == 0 && n>2) return "YES";
   return "NO";
        
}


int main() {
   // init_code();
    cout<<solve()<<endl;
    
    
    return 0;
}
