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
    int n,ans=0,i=1;
    cin>>n;
    while(n){
       i=0;
       while(1<<(i+1) <= n) i++;
       ans++;
       n-=(1<<i);


    }
    cout<<ans<<endl;

}