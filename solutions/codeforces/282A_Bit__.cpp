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
    int n;
    cin>>n;
    string str;
    while(n--){
        cin>>str;
        if(str == "++X" || str == "X++"){
            ans++;
        }else{
            ans--;
        }
    }
    
   return ans;     
}


int main() {
   //init_code();
    cout<<solve()<<endl;
    
    
    return 0;
}
