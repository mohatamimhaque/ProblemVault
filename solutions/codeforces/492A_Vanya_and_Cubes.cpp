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
  int n,need=1,i=2,j=0;
  cin>>n;
  while(n>=need){
    n = n-need;
    need = need + i;
    i++;
  }
  cout<<i-2<<endl;

}
