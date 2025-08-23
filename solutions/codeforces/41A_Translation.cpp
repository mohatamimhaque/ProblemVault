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
string same(string str1,string str2,int n){
    for(int i=0;i<n;i++){
        if(str1[i] != str2[n-i-1]){
            return "NO";
        }
    }
    return "YES";
}
int main(){
    //init_code();
    string str1,str2;
    cin>>str1>>str2;
    int m=str1.size(),n=str2.size();
    if(m==n){
        cout<<same(str1,str2,n)<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}