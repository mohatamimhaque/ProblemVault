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
    int t,x,y,z,a,b;
    string str,out;
    cin>>t;
    while(t--){
        cin>>str;
        out="";
        z=str.size();
        for(x=0;x<z;x+=2){
            out+=str[x];
        }
        if(z%2==0){
            out+=str[z-1];
        }
        cout<<out<<endl;
    }
   
    

}
