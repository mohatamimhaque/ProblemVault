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
   // init_code();
    int t,n,a,b,i,j,d;
    cin>>t;
    while(t--){
        cin>>n;
        a=b=0;
        for(i=0;i<n;i++){
            cin>>d;
            if(i%2 != d%2){
                a+=(i%2);
                b+=(d%2);
            }
        }
        if(a-b){
            cout<<-1<<endl;
        }else{
            cout<<a<<endl;
        }




    }




}