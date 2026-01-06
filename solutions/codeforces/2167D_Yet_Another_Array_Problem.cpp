#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int tmp,gc;cin>>gc;

        while(--n){
            cin>>tmp;
            gc = __gcd(tmp,gc);
        }
        int res = -1;
        for(int i=2;i<=1000;i++){
            if(__gcd(i,gc) == 1){
                res = i;
                break;
            }
        }

        cout<<res<<endl;
    }
}