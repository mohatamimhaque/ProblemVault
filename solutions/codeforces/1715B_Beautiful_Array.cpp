#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(nullptr)
#define MOD 1000000007LL
#define nl '\n'

using ll=long long;
using ull=unsigned long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vc=vector<ll>;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<"="<<x<<endl
#define debugv(v) cerr<<#v<<"=";for(auto e:v) cerr<<e<<" ";cerr<<endl
#else
#define debug(x)
#define debugv(v)
#endif

inline void init_file_io(){
    #ifndef ONLINE_JUDGE 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

class cp {
public:
    ll a,b,n,m,x,y,l,k,r;
    void solve(int t) {
        vector<ll>vec;
        long long n,k,b,s;cin>>n>>k>>b>>s;
        long long tmp = s - k*b;
        if(tmp<0 || tmp > n*(k-1)){
            cout<<-1<<nl;
            return;
        }
        if(b==0 && s==0){
            for(int i=0;i<n;i++) cout<<0<<' ';
            cout<<nl;
            return;
        }

        s-= tmp;

        for(int i=0;i<n-1;i++){
            x = 0;
            if(s>=k){
                x+=k;
                s-=k;
            }else{
                x+=s;
                s=0;
            }
            if(tmp>=k-1){
                tmp -= (k-1);
                x += (k-1);
            }else{
                x += tmp;
                tmp = 0;
            }
            vec.push_back(x);
        }
        vec.push_back(s+tmp);
        long long sum = 0; tmp = 0;
        for(auto v:vec){
            cout<<v<<' ';
        }
        cout<<nl;
    }
};

int main() {
    FAST_IO;
    init_file_io();
    cp obj;

    int T=1;
    cin>>T;
    for(int t=1; t<=T; t++) obj.solve(t);
    
    return 0;
}


/*
  __  __       _           _                  _           
 |  \/  |     | |         | |                (_)          
 | \  / | ___ | |__   __ _| |_ __ _ _ __ ___  _ _ __ ___  
 | |\/| |/ _ \| '_ \ / _` | __/ _` | '_ ` _ \| | '_ ` _ \ 
 | |  | | (_) | | | | (_| | || (_| | | | | | | | | | | | |
 |_|  |_|\___/|_| |_|\__,_|\__\__,_|_| |_| |_|_|_| |_| |_|
                                                          
*/