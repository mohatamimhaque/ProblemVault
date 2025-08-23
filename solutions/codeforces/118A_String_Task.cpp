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
   string str,vowel="aeiouy",up="";
   cin>>str;
   transform(str.begin(),str.end(),str.begin(),::tolower);
   for(auto ch:str){
        if(vowel.find(ch) == string::npos) {
            up=up+"."+ch;
        }
   }
   cout<<up<<endl;
}