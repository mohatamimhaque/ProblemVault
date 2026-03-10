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



void solve(int t) {
    long long n;cin>>n;
    vector<long long>permute;
    long long rs = 7777744444;
    for(int i = 2;i<=10;i+=2){
        int tmp = i/2;
        string str(tmp,'4');

        for(int j=tmp;j<i;j++){
            str += '7';
        }
        do{
            long long x = stoll(str);
            if(x>=n && x<=rs){
                rs = x;
            }
        }while(next_permutation(str.begin(),str.end()));

    }

    cout<<rs<<nl;
}

int32_t main(){
    fast_io;
    int t = 1, i = 1;
    // cin >> t;
    while (i <= t) {
        solve(i++);
    }
    return 0;
}

// Usage: Type "cptemplate" and press TAB (or your snippet expand key).
