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
int composite(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
   // init_code();
    int arr[4],h,i,x,j;
    for(i=0;i<4;i++){
        cin>>arr[i];
    }
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            if(arr[i]<arr[j]){
                h=arr[i];
                arr[i]=arr[j];
                arr[j]=h;
            }
        }
    }
    cout<<arr[0]-arr[1]<<' '<<arr[0]-arr[2]<<' '<<arr[0]-arr[3]<<endl;

    

   
    
}
