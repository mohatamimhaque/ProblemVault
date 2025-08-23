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
 // init_code();
  int t,n,sum,d,i;
  cin>>t;
  while(t--){
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++){
        cin>>d;
        if(i&1){
            sum+=d;
        }else{
            sum-=d;
        }
    }
   
    cout<<sum<<endl;
  }
}