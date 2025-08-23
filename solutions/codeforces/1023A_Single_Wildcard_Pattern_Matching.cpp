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

string solve() {
    int m,n,i=-1,j=0,k;
    string s1,s2;
    cin>>m>>n>>s1>>s2;
    if(m>n+1){
        return "NO";
    }
    while(j<m){
        if(s1[j]=='*'){
            i=j;
            break;
        }
        j++;
    }
    if(i==-1){
        if(s1==s2){
            return "YES";
        }else{
            return "NO";
        }
    }
    for(j=0;j<i;j++){
        if(s1[j] != s2[j]){
            return "NO";
        }
    }
    for(j=n-1,k=m-1;j>i,k>i;j--,k--){
        if(s1[k] != s2[j]){
            return "NO";
        }
    }
    return "YES";
}

int main() {
    init_code();
    
    int t = 1;
  // cin >> t;
    
    while (t--) {
        cout<<solve()<<endl;
    }

    return 0;
}
