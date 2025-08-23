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
        c=x<=1399?4:x<=1599?3:x<=1899?2:1;
        cout<<"Division "<<c<<endl;
    }
}
