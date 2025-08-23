#include<bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

}
int solve(){
    int n;
    cin>>n;
    return n/10+n%10;
}

int main(){
    init_code();
    int t=1;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}