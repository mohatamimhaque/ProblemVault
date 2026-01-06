#include<iostream>
#include<string>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string str;
        cin>>str;
        int res = 0;

        for(int i=n-2;i>=0;i--){
            res+=(str[n-1]!=str[i]);
        }

        cout<<res<<endl;
    }
}

