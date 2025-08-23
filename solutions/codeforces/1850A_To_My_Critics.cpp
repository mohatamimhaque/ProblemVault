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
    int t,x,y,z,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if(x+y>=10||y+z>=10||z+x>=10){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
   
    

}
