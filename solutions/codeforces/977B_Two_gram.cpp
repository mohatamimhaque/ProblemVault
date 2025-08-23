#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp;
    string s;
    int n;
    cin>>n;
    cin>>s;
    for(int i=0;i<n-1;i++){
        string ss = s.substr(i,2);
        mp[ss]++;
    }
    int m = 0;
    for(auto it:mp){
        m = max(m,it.second);
    }
    for(auto it:mp){
       if(it.second == m){
        cout<<it.first<<endl;
        break;
       }
    }


    return 0;
}
