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


int main(){
   //init_code();
    int t;
    cin >> t;

     while (t--) {
        int n,i,num_1=0,d;
        cin >> n;
        for(i=0;i<n;i++){
            cin>>d;
            if(d==1) num_1++;
        }
    
        cout << n-(num_1/2) << endl;
    }

    return 0;
}
