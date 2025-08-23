#include<bits/stdc++.h>
using namespace std;


void solve(){
    int a,b,c,x,y,z;
    cin>>a>>x>>b>>y>>c>>z;
    if((a==b && b==c && a == x+y+z) || (x==y && y==z && x==a+b+c) || (b+c == a && y==z && x+y==a) || (x==y+z && b==c && a+b==x)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
  

}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    while(n--){
        solve();
    }
}