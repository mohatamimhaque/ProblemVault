#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define ps(b) cout << ((b) ? "YES\n" : "NO\n")
#define mod 1000000007
#define uint unsigned long long
using namespace std;

template<typename T, typename U> istream &operator>>(istream &in, pair<T, U> &a) { return in >> a.first >> a.second; }
template<typename T> istream &operator>>(istream &in, vector<T> &a) { for (auto &x : a) in >> x; return in; }
template<typename T, typename U> ostream &operator<<(ostream &out, const pair<T, U> &a) { return out << a.first << ' ' << a.second; }
template<typename T, typename U> ostream &operator<<(ostream &out, const vector<pair<T, U>> &a) { for (auto &x : a) out << x << '\n'; return out; }
template<typename T> ostream &operator<<(ostream &out, const vector<T> &a) { int n = a.size(); if (!n) return out; out << a[0]; for (int i = 1; i < n; i++) out << ' ' << a[i]; return out; }

void init_code() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

bool isPrime(int n) { return n == 2 || n == 3 ? true : (n <= 1 || n % 2 == 0 || n % 3 == 0 ? false : ([&]() { for (int i = 5; i * i <= n; i += 6) if (n % i == 0 || n % (i + 2) == 0) return false; return true; })()); }
int digit(int n) { return n <= 0 ? 0 : 1 + digit(n / 10); }
uint power(int x, int y, int p = mod) { uint res = 1; x %= p; while (y > 0) { if (y & 1) res = (res * x) % p; y >>= 1; x = (x * x) % p; } return res; }
int modadd(int a, int b) { return ((a % mod) + (b % mod)) % mod; }
int modsub(int a, int b) { return ((a % mod) - (b % mod) + mod) % mod; }
int modmul(int a, int b) { return ((1LL * a % mod) * (b % mod)) % mod; }
uint modInverse(int n, int p = mod) { return power(n, p - 2, p); }

void func(vector<int>&vec,vector<int>&take,int n,int l,int r,int x,int k,int &res){
    
    if(k==n){
        if(take.size()>=2){
            int sum = accumulate(take.begin(),take.end(),0);
            res+=(sum>=l && sum<=r && abs(take[0]-take[take.size()-1])>=x);
        }
        return;
    }

    take.push_back(vec[k]);

    func(vec,take,n,l,r,x,k+1,res);
    take.pop_back();
    func(vec,take,n,l,r,x,k+1,res);
}

void solve(int t) {
    int n,l,r,x;cin>>n>>l>>r>>x;
    int res = 0,k=0;
    vector<int>vec(n);cin>>vec;
    sort(vec.begin(),vec.end());
    vector<int>take;
    func(vec,take,n,l,r,x,k,res);
    cout<<res<<endl;
}

int32_t main(){
    fast_io;
    init_code();
    int t = 1, i = 1;
    // cin >> t;
    while (i <= t) {
        solve(i++);
    }
    return 0;
}

// Usage: Type "cptemplate" and press TAB (or your snippet expand key).
