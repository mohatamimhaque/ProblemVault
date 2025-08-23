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

int main(){
    //init_code();
    int q,n,m=0,i,k=-1,l=-1;
    cin >> q;
    
    while (q--) {
        m=0;
        k=l=-1;
        string s, t;
        cin >> n >> s >> t;
        for(i=0;i<n;i++){
            if(s[i] != t[i]){
                m++;
                if(k==-1){
                    k=i;
                }else if(l==-1){
                    l=i;
                }
            }
            if(m>2){
                break;
            }
        }


        
        
        if (m==2) {
            if(s[k]==s[l] && t[k]==t[l]){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
    
}
