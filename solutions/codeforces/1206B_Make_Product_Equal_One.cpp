#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
using namespace std;


void solve(int t) {
    int n;cin>>n;
    int tmp = 0,zero=0;
    long long rs = 0,x;
    while(n--){
        cin>>x;
        if(x<0){
            rs = rs - 1 - x;
            tmp++;
        }else if(x>0){
            rs = rs + x -1;
        }else{
            zero++;
            rs++;
        }
    }

    if(tmp&1 && zero==0){
        rs+=2;
    }
    cout<<rs<<nl;
}
    

int32_t main(){
    int t = 1, i = 1;
    // cin >> t;
    while (i <= t) {
        solve(i++);
    }
    return 0;
}

