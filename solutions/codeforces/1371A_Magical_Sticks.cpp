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
   int t,n;
   cin>>t;
   while(t--){
    cin>>n;
        if(n%2){
            cout<<n/2+1<<endl;
        }else{
            cout<<n/2<<endl;
        }
   }

    return 0;
}