#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,n;
    cin>>a>>b>>n;
    int i=0;
    while(i<10){
        if((a*10+i)%b==0){
            break;
        }
        i++;
    }
    if(i==10){
        cout<<-1<<endl;
        return;
    }    
    cout<<a*10+i;
    for(int i=0;i<n-1;i++){
        cout<<0;
    }
    cout<<endl;    
}    
    
int main(){
    int t=1;
    while(t--){
        solve();
    }    
     return 0;
}