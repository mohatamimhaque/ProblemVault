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
    int t,x,y,z,a,b,c,i;
    string str,out;
    cin>>t;
    while(t--){
        cin>>x;
        y=x/1000;
        z=x%1000;
        
        a=y%10+y/100+(y/10)%10;
        b=z%10+z/100+(z/10)%10;
        if(a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }
}
