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
  //  init_code();
   string str;
   cin>>str;
   int a=0,o=0;
   for(auto ch:str){
        if(ch=='a'){
            a++;
        }else{
            o++;
        }
   }
   if(str.length()<a*2){
        cout<<str.length()<<endl;
   }else{
        cout<<a*2-1<<endl;
   }
}