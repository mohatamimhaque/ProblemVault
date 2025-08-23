
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void fun(){
    ll n;
    cin>>n;
    vector<ll>vec(n);
    ll sum = 0;
    for(ll i=0;i<n-2;i++){
        cin>>vec[i];
        sum+=vec[i];
    }
    ll sLast;
    cin>>sLast;
    ll last;
    cin>>last;
    sLast -= sum;
    last -= sLast;
    cout<<last<<endl;
}

int main(){
   //init_code();
 
    int t;
    cin>>t;
    while(t--){
        fun();
    }


    return 0;

}
