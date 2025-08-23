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
    int n,data,sum=0;
    cin>>n;
    while(n--){
        cin>>data;
        data = data<0?-data:data;
        sum+=data;
    }
    cout<<sum<<endl;
}
