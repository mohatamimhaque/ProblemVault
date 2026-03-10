#include <bits/stdc++.h>>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        bool tmp = false;
        int x;
        while(n--){
            cin>>x;
            if(x==67){
                tmp = true;
            }
        }

        cout<<(tmp?"YES\n":"NO\n");
    }
}