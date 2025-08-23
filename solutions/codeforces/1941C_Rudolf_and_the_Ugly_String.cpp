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
    init_code();
    int t,n,i,ans;
    string str;
    cin>>t;
    while(t--){
        cin>>n>>str;
        ans=0;
        if(n<4){
            if(str == "map" || str=="pie"){
                ans++;
            }
        }else{
            for(i=0;i<n-2;i++){
                if(str[i]=='p'&&str[i+1]=='i'&&str[i+2]=='e' || str[i]=='m'&&str[i+1]=='a'&&str[i+2]=='p'){
                    ans++;
                    i+=2;
                }
            }
        }

        cout<<ans<<endl;
    }

}