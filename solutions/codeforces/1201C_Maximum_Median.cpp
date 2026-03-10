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
    ll l,a,b,n,m,x,y,k,r;
    vector<ll>vec;

    bool pred(ll m,ll k){
        ll tmp = 0;
        for(int i = n/2;i<n;i++){
            if(vec[i]>m){
                break;
            }
            tmp += (m-  vec[i]);
        }

        return tmp<=k;
    }
    void solve(int t) {
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a;
            vec.push_back(a);
        }
        
        sort(vec.begin(),vec.end());
        l = vec[n/2], r = vec[n/2] + k, a = -1;

        while(l<=r){
            m = l + (r-l)/2;

            if(pred(m,k)){
                a = max(a,m);
                l = m + 1;
            }else{
                r = m - 1;
            }
        }


        cout<< a <<nl;
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