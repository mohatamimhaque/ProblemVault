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
    int a,b,t,len;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        len=str.length();
        if(len>10){
            cout<<str.front()<<len-2<<str.back()<<endl;
        }else{
            cout<<str<<endl;
        }
    }
}