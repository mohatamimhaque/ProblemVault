#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


int main(){
   //init_code();
    long long t,x,ans,n;
    cin >> t;
    string str;

    while (t--) {
        cin>>n>>str;
        string tt(n,'1');
        ans = 0;
        for(long long i=0;i<n;++i){
            if(str[i] == '0'){
                for(long long j=i+1;j<=n;j+=(i+1)){
                    if(str[j-1] == '1'){
                        break;
                    }
                    if(tt[j-1]=='0'){
                        continue;
                    }
                    tt[j-1] = '0';
                    ans+=(i+1);
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
