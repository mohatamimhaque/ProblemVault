#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
int notZero(int n){
    while(n>0){
        if(n%10 == 0) return 0;
        n/=10;
    }
    return 1;
}
void solve(){
    int n,a=0;
    cin>>n;
    if(n%7 == 0){
        cout<<n<<endl;
    }else{
        n = (n/10)*10;
        while(n%7 != 0) n++;
        cout<<n<<endl;
    }
    
}

int main(){
   //init_code();
    long long t,x,sum,n;
    cin >> t;
    string str;

    while (t--) {
        solve();
         
    }

    return 0;
}
