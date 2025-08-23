#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,data,prev,highest=1;
    int m=0;
    cin>>n;
    cin>>prev;
    for(int i=1;i<n;i++){
        cin>>data;
        if(data>=prev){
            highest++;
        }else{
            m=max(m,highest);
            highest = 1;
        }
        prev = data;
    }
    cout<<max(highest,m)<<endl;

}

int main(){
    solve();
}
