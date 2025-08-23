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
    int x,y,i,j;
    cin>>x>>y;
    for(i=1;i<=x;i++){
        for(j=1;j<=y;j++){
            if(i&1 || i%4==0 && j==1 || i%4==2 && j==y){
                cout<<"#";
            }else{
                cout<<'.';
            }
        }
        cout<<endl;
    }
}