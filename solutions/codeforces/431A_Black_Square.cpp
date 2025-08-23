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
    int cal=0;
    int a[5],i;
    string str;
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>str;
    for(char c:str){
        i = c - '0';
        cal+=a[i];
    }
    
    cout<<cal<<endl;
    

}
