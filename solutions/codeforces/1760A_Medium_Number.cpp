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
    int t,i=1,m,a,b,c,min,max;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        min = a<b?a<c?a:c:b<c?b:c;
        max = a>b?a>c?a:c:b>c?b:c;
        cout<<(a+b+c) - (max+min)<<endl;
    }
    
        
        
    
  
    
    return 0;
}
