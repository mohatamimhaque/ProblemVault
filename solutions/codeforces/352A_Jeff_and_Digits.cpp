#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define lli long long int
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

void solve() {
    int n,d,five=0,zero=0;
    cin>>n;
    while(n--){
        cin>>d;
        five+=(d==5);
        zero+=(d==0);                       
    }
    five-=five%9;
    if(zero==0){
        cout<<-1<<endl;
        return;
    }else if(five==0){
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<five;i++){
        cout<<5;
    }
    for(int i=0;i<zero;i++){
        cout<<0;
    }
    cout<<endl;

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
