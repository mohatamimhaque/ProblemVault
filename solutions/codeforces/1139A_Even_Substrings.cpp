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
   int n;
    string s;
    
    cin >> n >> s;
    
    long long evenSubstringsCount = 0;

    for (int i = 0; i < n; i++) {
        if ((s[i] - '0') % 2 == 0) {
            evenSubstringsCount += (i + 1);
        }
    }

    cout << evenSubstringsCount << endl;
}