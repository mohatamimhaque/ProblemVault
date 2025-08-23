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
int solve() {
    int ans=0;
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(auto &it:vec) cin>>it;
    for(auto it:vec){
        if(it>=vec[k-1] && it>0){
            ans++;
        }
    }
    
   return ans;     
}


int main() {
   //init_code();
    cout<<solve()<<endl;
    
    
    return 0;
}
