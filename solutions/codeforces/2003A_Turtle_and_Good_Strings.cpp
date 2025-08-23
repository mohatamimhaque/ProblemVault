#include<bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

// Function to check if the string is good
string isGood(int n, const string& str) {
      if(str[0] !=str[n-1]){
        return "YES";
      }
    return "NO";
}

int main() {
    //init_code();
    int q, n;
    cin >> q;
    
    while (q--) {
        string str;
        cin >> n >> str;
        cout << isGood(n, str) << endl;
    }
    
    return 0;
}
