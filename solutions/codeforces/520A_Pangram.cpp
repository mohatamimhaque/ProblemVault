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
    int n,i,j,k;
    char ch;
    string str;
    cin>>n>>str;
    if(n>=26){
        transform(str.begin(),str.end(),str.begin(),::tolower);
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(str[i]==str[j]){
                    for(k=j;k<n-1;k++){
                        str[k]=str[k+1];
                    }
                    j--;
                    n--;
                }
            }
        }
        if(n==26){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }else{
        cout<<"NO"<<endl;
    }

    
 



}