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
  int n,f,k,t,i,j,fav,temp,neat,ar;
  cin>>t;
  while(t--){
    cin>>n>>f>>k;
    int arr[n];

    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    fav = arr[f-1];
    for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
      }
    }
    i=0;
    neat=ar=0;
    while(i<n && arr[i]>=fav){
      if(arr[i]==fav){
        neat++;
        if(i>=k){
          ar++;
        }
      }
      i++;
    }
    if(ar==neat){
      cout<<"NO"<<endl;
    }else if(ar==0){
      cout<<"YES"<<endl;
    }else if(ar<neat){
      cout<<"MAYBE"<<endl;
    }

  }

}
