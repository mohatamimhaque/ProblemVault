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




int main() {
  //init_code();
  int t,a,b;
  cin>>t;
  while(t--){
    cin>>a>>b;
    if((a-b)&1){
      cout<<"Alice"<<endl;
    }else{
      cout<<"Bob"<<endl;
    }
    
  }

}
