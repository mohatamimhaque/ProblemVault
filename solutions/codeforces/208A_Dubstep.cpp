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




void solve() {
    string a,b="",c;
    cin>>a;
    int n = a.size();
    for(int i=0;i<n;i++){
        c=a.substr(i,3);
        if(c=="WUB"){
            if(b!=""&&b.back() != ' '){
                b+=' ';
            }
        i+=2;
        }else{
            b+=a[i];
        }
    }
   

    cout<<b<<endl;


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
