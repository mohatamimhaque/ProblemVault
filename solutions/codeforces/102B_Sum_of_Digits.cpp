#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define ll long long int
using namespace std;

string func(string tp){
    int tmp = 0;
    for(auto v:tp){
        int x = v-'0';
        tmp+=x;
    }

    char ch;
    string str = "";
    while(tmp){
        ch = tmp%10 + '0';
        tmp/=10;
        str+=ch;
    }
    reverse(str.begin(),str.end());
    return str;
}

void solve(int t){
    string str;cin>>str;
    int res = 0;
        while(str.size()>1){
        str = func(str);
        res++;
    }
    cout<<res<<nl;

}

int main(){
    fast_io;
    int t=1;
    //cin>>t;
    int i = 1;
    while(i<=t){
        solve(i);
        i++;
    }
}
