#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define lli long long int
#define ll long long
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 1000000007
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
ll bigMod(ll b,ll p){
    ll res=1;
    while(p){
        if(p&1) res=(res*b)%mod;
        b=(b%mod*b%mod)%mod;
        p>>=1;
    }
    return res%mod;
 }

template <class T>
void print(const T& a) {
    for (const auto& d : a) {
        cout << d << ' ';
    }
    cout <<nl;
}
template <class T>
void sorting(T& a){
    sort(a.begin(),a.end(), greater<ll>());
}
void vecIn(vector<ll>& a,ll n){
    ll d;
    for(ll i=0;i<n;i++){
        cin>>d;
        a.push_back(d);
    }
}
void solve(){
    int n;
    cin>>n;
    if(n==1 || n==3){
        cout<<-1<<nl;
    }else if(n==2){
        cout<<66<<nl;
    }else if(n==4){
        cout<<3366<<nl;
    }else{
        if(n&1){
            for(int i=1;i<=n-5;i++){
                cout<<3;
            }
            cout<<36366<<nl;
        }else{
            for(int i=1;i<=n-2;i++){
                cout<<3;
            }
            cout<<66<<nl;
        }
    }
}
int main() {
    init_code();

    int t=1;
    cin >> t;

    while (t--) {
       solve();
    }

    return 0;
}