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
void solve(){
    string str;
    int i=0;
    cin>>str;
    for(i=0;i<str.size()-1;i++){
        if(str[i]==str[i+1]){
            break;
        }
    }
    char c='a';
    while(c==str[i]){
        c++;
    }
    cout<<str.substr(0,i+1)+c+str.substr(i+1)<<endl;
    //cout<<str[i]<<endl;
    return ;
}

int main(){
    init_code();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}