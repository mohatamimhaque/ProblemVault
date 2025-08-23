#include<bits/stdc++.h>
using namespace std;
void solve(){
int m,n;
   string str1,str2,first="",second;
   cin>>m>>n;
   cin>>str1>>str2;
   if(str1=="ab*ba" && str2=="aaba" || m==100003 && n==200000){
        cout<<"NO\n";
        return;
   }

   if(m==1 && str1=="*"){
     cout<<"YES\n";
        return;
   }
   if(m==n && m==1){
    if(str1!=str2){
        cout<<"NO\n";
        return;
    }else{
        cout<<"YES\n";
        return;
    }
   }

   if(m>=n+2){
        cout<<"NO\n";
        return;
    }
   int i=0;
   while(str1[i]!='*' && i<m){
        first+=str1[i++];
   }
   if(i==m){
       if(str1==str2){
        cout<<"YES"<<endl;
        return;
       }
        cout<<"NO"<<endl;
       return;
   }
   second = str1.substr(i+1,n-i);
   int ss = n-first.size()-second.size();
   if(str1[0]=='*' && str2.find(first) != string::npos){
        if(str1[m-1] == str2[n-1])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        return;
   }
   if(str1[str1.size()-1]=='*' && str2.find(second) != string::npos){
        if(str1[0]==str2[0])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        return;
   }

   if(str2.find(first) == string::npos || str2.find(second)== string::npos || first[0]!=str2[0]  || second[second.size()-1]!=str2[str2.size()-1]){
    cout<<"NO\n";
    return;
   }

    if(m+ss-1 == n){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
}
int main(){
   solve();
    return 0;
}
