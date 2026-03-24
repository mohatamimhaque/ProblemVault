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
    vector<ll>vec;
    void solve(int t) {
        queue<ll>Q;
        Q.push(4);
        Q.push(7);

        while(!Q.empty()){
            a = Q.front();Q.pop();
            if(a>1e9) continue;
            vec.push_back(a);

            Q.push(a*10+4);
            Q.push(a*10+7);
        }
        cin>>b;

        n = lower_bound(vec.begin(),vec.end(),b) - vec.begin();

        cout<<n+1<<nl;

        
    }
};

int main() {
    FAST_IO;
    init_file_io();
    cp obj;

    int T=1;
    // cin>>T;
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