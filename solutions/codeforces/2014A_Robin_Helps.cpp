#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}



int main() {
   // init_code();
     int t,n,k,golds,data,pepole,i;
    cin >> t;

    while (t--) {
        golds = pepole = 0;
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>data;
            if(data>=k){
                golds+=data;
            }
            if(data == 0 && golds>0){
                golds--;
                pepole++;
            }
        }


        cout<<pepole<<endl;
    }

        

    return 0;
}
