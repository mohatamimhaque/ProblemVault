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
    int n,data,prev=-1;;
    cin>>n;
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        cin>>data;

        mp[data].push_back(i);
    }
    vector<pair<int,int>>vec;
    for(auto it:mp){
        if(it.second.size()==1){
            vec.push_back(make_pair(it.first,0));
        }else{
            set<int>ss;
            for(int i=0;i<it.second.size()-1;i++){
                ss.insert(abs(it.second[i]-it.second[i+1]));
            }
            if(ss.size()==1){
                vec.push_back(make_pair(it.first,abs(it.second[0]-it.second[1])));
            }
        }
    }
    cout<<vec.size()<<endl;
    for(auto v:vec){
        cout<<v.first<<' '<<v.second<<endl;
    }
    
    
    return;
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
