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
  int t,n,i,j;string str;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n];
    for(i=1;i<=n;i++){
        cin>>str;
        for(j=0;j<4;j++){
            if(str[j]=='#'){
                arr[i-1] = j+1;
            }
        }
    }
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
  }
}