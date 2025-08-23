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
  //init_code();
    int t,x,y,z,a,b,c,i;

    cin>>x;
    y=z=x/2;
    if(x&1){
        z++;
    }
    while(composite(y)!=1 || composite(z)!=1){
        y--;
        z++;
    }
    cout<<y<<' '<<z<<endl;
    
}
