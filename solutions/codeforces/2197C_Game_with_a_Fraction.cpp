#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(nullptr)
#define MOD 1000000007LL
#define nl '\n'

using ll=int64_t;
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

template<typename T> istream& operator>>(istream &in,vector<T>&v){for(auto &x:v) in>>x; return in;}
template<typename T> ostream& operator<<(ostream &out,const vector<T>&v){for(size_t i=0;i<v.size();i++){if(i) out<<" ";out<<v[i];}return out;}
template<typename T,typename U> istream& operator>>(istream &in,pair<T,U>&p){return in>>p.first>>p.second;}
template<typename T,typename U> ostream& operator<<(ostream &out,const pair<T,U>&p){return out<<p.first<<" "<<p.second;}
template<typename K,typename V> ostream& operator<<(ostream &out,const map<K,V>&m){for(auto &[k,v]:m) out<<k<<"->"<<v<<endl;return out;}
template<typename T> ostream& operator<<(ostream &out,const set<T>&s){for(auto &x:s) out<<x<<" ";return out;}
template<typename T> void srt(vector<T>&v,int start=0,int end=-1){if(end==-1) end=v.size()-1;sort(v.begin()+start,v.begin()+end+1);}
template<typename T> void rev(vector<T>&v,int start=0,int end=-1){if(end==-1) end=v.size()-1;reverse(v.begin()+start,v.begin()+end+1);}
template<typename T> void print(const vector<T>&v,int start=0,int end=-1){if(end==-1) end=v.size()-1;for(int i=start;i<=end;i++){if(i>start) cout<<' ';cout<<v[i];}cout<<nl;}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
inline int rand_int(int a,int b){return uniform_int_distribution<int>(a,b)(rng);}
inline bool is_prime(ll n){if(n<2) return 0;if(n<=3) return 1;if(n%2==0||n%3==0) return 0;for(ll i=5;i*i<=n;i+=6) if(n%i==0||n%(i+2)==0) return 0; return 1;}
inline int digits(ll n){return n==0?1:(int)log10(n)+1;}
ll mod_pow(ll b,ll e,ll m=MOD){ll r=1;b%=m;while(e){if(e&1) r=r*b%m;b=b*b%m;e>>=1;}return r;}
ll mod_inv(ll n,ll m=MOD){return mod_pow(n,m-2,m);}
inline ll mod_add(ll a,ll b,ll m=MOD){return(a+b)%m;}
inline ll mod_sub(ll a,ll b,ll m=MOD){return(a-b+m)%m;}
inline ll mod_mul(ll a,ll b,ll m=MOD){return(a*b)%m;}
const int MAXN=2000005; ll fact[MAXN],inv_fact[MAXN];
void precompute_factorials(int n=MAXN-1){fact[0]=1;for(int i=1;i<=n;i++) fact[i]=fact[i-1]*i%MOD; inv_fact[n]=mod_inv(fact[n]); for(int i=n-1;i>=0;i--) inv_fact[i]=inv_fact[i+1]*(i+1)%MOD;}
inline ll nCr_mod(ll n,ll r){if(r<0||r>n) return 0; return fact[n]*inv_fact[r]%MOD*inv_fact[n-r]%MOD;}
inline ll nPr_mod(ll n,ll r){if(r<0||r>n) return 0; return fact[n]*inv_fact[n-r]%MOD;}

class cp {
public:
    void solve(int t) {
    ll p, q;
    cin >> p >> q;

    
    if (p<q && 2*q <= 3*p) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
    }
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