#include<bits/stdc++.h>
#define ll long long
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
    //init_code();
    int n,i=1,d;
    cin>>n;
    int biceps=0,back=0,chest=0;
    for(i=1;i<=n;i++){
        cin>>d;
        if(i%3==0){
            back+=d;
        }else if(i%3==1){
            chest+=d;
        }else{
            biceps+=d;
        }
    }
    string m = back>chest?back>biceps?"back":"biceps":chest>biceps?"chest":"biceps";
    cout<<m<<endl;
    
        
        
    
  
    
    return 0;
}
