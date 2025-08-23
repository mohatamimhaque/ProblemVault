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

int main() {
    //init_code();
     int n,s=0,i=5;
     cin>>n;
     while(i>1){
        s=s+n/i;
        n%=i;
        i--;
     }
     s+=n;
     cout<<s<<endl;
  
    
    return 0;
}
