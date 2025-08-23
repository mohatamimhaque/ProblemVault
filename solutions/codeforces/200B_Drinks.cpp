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
    int n,sum=0,d,i=1;
    cin>>n;
    while(i<=n){
        cin>>d;
        sum+=d;
        i++;
    }
    float out = (float)sum/(float)n;
    cout<<out<<endl;




}