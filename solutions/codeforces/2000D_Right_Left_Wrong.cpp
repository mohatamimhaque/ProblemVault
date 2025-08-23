#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 1000000007
#define int long long int
#define uint unsigned long long
using namespace std;

template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}    
bool isPrime(int n){if(n==1) return false;if(n==2 || n==3) return true;if(n%2==0 || n%3==0) return false;for(int i=5;i*i<=n;i+=6){if(n%i==0 || n%(i+2)==0) return false;}return true;}
int digit(int n) {if(n <= 0) {return 0;}return 1 + digit(n / 10);} 
uint power(int x, int y, int p =  mod){unsigned long long res = 1;x = x % p;while (y > 0){if (y & 1)res = (res * x) % p;y = y >> 1;x = (x * x) % p;}return res;}
int modadd(int a, int b) { return ((a % mod) + (b % mod)) % mod; }
int modsub(int a, int b) { return ((a % mod) - (b % mod) + mod) % mod; }
int modmul(int a, int b) { return ((1LL * a % mod) * (b % mod)) % mod; }
uint modInverse(int n, int p=mod){return power(n, p - 2, p);}

void solve(){
    int n,d,res=0,l=0,r=n-1;
    cin>>n;
    r=n-1;
    vector<int>vec;
    cin>>vec;
    vec.push_back(0);
    for(int i=1;i<=n;i++){
        cin>>d;
        vec.push_back(d+vec[i-1]);
    }
    string str;
    cin>>str;
    while(l<r){
        if(str[l] == 'L' && str[r]=='R'){
            res+=(vec[r+1] - vec[l]);
            l++;
            r--;
            continue;
        }
        if(str[l]=='R'){
            l++;
            continue;
        }
        if(str[r]=='L'){
           r--;
           continue;
        }
        l++;r--;
    }
    cout<<res<<nl;




}

int32_t main(){
    //init_code();
    int T = 1;
    cin >> T;
    while (T--){
        solve();
    }
    return 0;
}
