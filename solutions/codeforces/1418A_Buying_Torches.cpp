#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define lli long long int
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 1000000007
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb>
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define rsrt(v)  sort(v.begin(),v.end(),greater<int>())         // reverse sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
using namespace std;


void modadd(int &a , int b) {a=((a%mod)+(b%mod))%mod;}
void modsub(int &a , int b) {a=((a%mod)-(b%mod)+mod)%mod;}
void modmul(int &a , int b) {a=((a%mod)*(b%mod))%mod;}

// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================






void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
int bigMod(int b,int p){
    int res=1;
    while(p){
        if(p&1) res=(res*b)%mod;
        b=(b%mod*b%mod)%mod;
        p>>=1;
    }
    return res%mod;
 }
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)  return 0;
    }
    return 1;
}

int digit(int n) {
  if (n <= 0) {
      return 0;
  }
  return 1 + digit(n / 10);
} 

int sumOfDigit(int n){
  if(n<10){
      return n;
  }
  return n%10+sumOfDigit(n/10);
}

uint power(int x, int y, int p =  mod){
    unsigned long long res = 1;
    x = x % p;
    while (y > 0){
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}


uint modInverse(int n, int p=mod){
    return power(n, p - 2, p);
}


void solve(){
    int x,y,k,ans=0;
    cin>>x>>y>>k;
    int stick_need = k+(y*k);
    ans+=k;

    
  
    while(stick_need>=x){

        int p = stick_need/x;
        stick_need=(stick_need-x*p+p);
        ans += p;
    }
    ans+=(stick_need >1);



    




    cout<<ans<<nl;//' ' <<p<<' '<<stick_need<<nl;
}

int32_t main(){
    init_code();
    int T = 1;
    cin >> T;
    while (T--){
        solve();
    }
    return 0;
}

    