#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define lli long long int
#define ll long long
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


const int MOD = 1e9 + 7;

void solve() {
    int n,f,s,x=0,y=0;
    cin>>n;
    vector<int>BionicSolver(n);
    vector<int>Robo(n);
    for(int i=0;i<n;i++){
        cin>>BionicSolver[i];
    }
    for(int i=0;i<n;i++){
        cin>>Robo[i];
    }
    for(int i=0;i<n;i++){
        x+=(BionicSolver[i]==1&&Robo[i]==0);
        y+=(BionicSolver[i]==0&&Robo[i]==1);
    }
    if(x==0){
        cout<<-1<<nl;
        return;
    }
    int p=1;
    while(p*x<=y){
        p++;
    }
    cout<< p << nl;
}


int main() {
    init_code();
    
    int t = 1;
    //cin >> t;

    while (t--) {
       solve();
    }

    return 0;
}
