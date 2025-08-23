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
void solve() {
    int n;
    cin>>n;
    int n1=0,n2=0,d;
    while(n--){
    cin>>d;
    if(d&1){
        n1++;
    }else{
        n2++;
    }
  }

    if(n2){
        cout<<"2 ";
    }
    if(n1){
        cout<<"1 ";
    }
    for(int i=1;i<n2;i++){
        cout<<"2 ";
    }
    for(int i=1;i<n1;i++){
        cout<<"1 ";
    }

}


int main() {
//init_code();
   int t=1;
   // cin>>t;
   while(t--){
       // cout<<solve()<<endl;
    solve();
   }
    
    
    return 0;
}
